## Goal
Write a detailed example that

1. converts C++ classes to python classes
    - convert constructors
    - convert methods
    - read-write public data members
    - define property with setter and getter
    - convert class template too
    - Inject polymorphic objects to constructors

2. Convert C++ functions to Python functions
    - Pass polymorphic object as argument

3. Receive STL containers data in Python


## Create Python module

### Clone pybind11

In the project folder, clone pybind11

```
git clone https://github.com/pybind/pybind11.git
```

Look at `.gitignore` file, pybind11 repo is ignored as we just read it.

### Compile

Open a terminal being in the project folder, run

```
mkdir build
cd build
cmake ..
make 
```

In the `build` directory, you should have a compiled module with the name similar to:
```
robot.cpython-39-x86_64-linux-gnu.so
```

## Run 

In a terminal being in the `build` directory, run
```
python
```
in Python, import the library

```
import robot 
```
and work with the classes and functions imported. There is an example
in `pythonApi/example.py`.








