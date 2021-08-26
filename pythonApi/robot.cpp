#include "../src/t800.h"
#include "../src/t1000.h"
#include "../src/helper.h"

#include "../pybind11/include/pybind11/pybind11.h"
// to convert C++ STL containers to python list
#include "../pybind11/include/pybind11/stl.h" 

namespace py = pybind11;
using namespace std;
PYBIND11_MODULE(robot, m)
{
    // Do not add abstract class constructor
    // We are just declaring it to python. Because
    // It is an argument type in T800, T1000  constructors
    // and also an argument type of Move() function.
    py::class_<ISpeech>(m, "ISpeech");

    // Add the base class to work polymorphism.
    // For example T800 constructed with ISpeech, if
    // we don't declare it here, python doesn't allow
    // injectign SpeechV1 to T800 constructor.
    py::class_<SpeechV1, ISpeech>(m, "SpeechV1")
        .def(py::init<string>()); //Constructor

    py::class_<SpeechV2, ISpeech>(m, "SpeechV2")
        .def(py::init<string>()); // Constructor

    py::class_<IRobot>(m, "IRobot"); // Abstract, do not add constructor
    
    py::class_<T800, IRobot>(m, "T800")
        .def(py::init<string, int, ISpeech &>()) // constructor
        .def("Walk", &T800::Walk)
        .def("Talk", &T800::Talk)
        .def("GetData", &T800::GetData)
        // read-write public data memeber
        // you can use def_readonly as well.
        .def_readwrite("year", &T800::year); 

    using T = double;
    py::class_<T1000<T>, IRobot>(m, "T1000")
        .def(py::init<string, T, ISpeech &>()) // constructor
        .def("Walk", &T1000<T>::Walk) // method
        .def("Talk", &T1000<T>::Talk) // method
        // Define property with getter and setter
        .def_property("height", &T1000<T>::GetHeight,&T1000<T>::SetHeight); 

    m.def("Move", &Move);
}

