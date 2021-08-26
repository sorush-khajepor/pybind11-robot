In the current folder

git clone https://github.com/pybind/pybind11.git

Look at `.gitignore` file, pybind11 repo is ignored as we just read it:
```
pybind11/
```

##Goal


Convert C++ class to python class
    - convert constructors
    - convert methods
    - read-write public data members
    - define property with setter and getter
    - convert class template too
    - Inject polymorphic objects to constructors

Convert C++ function to Python function
    Pass polymorphic object as argument

Receive STL containers data in Python




