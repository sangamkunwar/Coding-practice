# Python Modules

## What is a Module?

A module in Python is a file containing Python definitions and statements. The file name is the module name with the suffix `.py` added. Modules help in organizing code and reusing functionalities across different programs.

## Creating a Module

To create a module, simply write the Python code in a file with a `.py` extension. For example, create a file named `mymodule.py`:

```python
# mymodule.py

def greet(name):
    """This function greets the person passed in as a parameter."""
    return f"Hello, {name}!"

def add(a, b):
    """This function adds two numbers."""
    return a + b

def subtract(a, b):
    """This function subtracts one number from another."""
    return a - b
```
## Using a Module
To use the functions defined in mymodule.py, import the module in your Python script. For example, create a file named main.py:
```python
# main.py

import mymodule

# Using the greet function
print(mymodule.greet("Alice"))

# Using the add function
result_add = mymodule.add(5, 3)
print(f"The result of adding is: {result_add}")

# Using the subtract function
result_subtract = mymodule.subtract(10, 4)
print(f"The result of subtracting is: {result_subtract}")
```
## Run main.py:
```shh
python main.py
```
## Expected Output:
```console
Hello, Alice!
The result of adding is: 8
The result of subtracting is: 6
```
## Compiled Python Files (.pyc)
When a Python script runs, Python compiles the code to bytecode and saves it as a .pyc file in a __pycache__ directory. These files are used to speed up module loading in subsequent runs.
## Manually Compiling .pyc Files
You can manually compile .pyc files using the py_compile module:
```python
import py_compile

py_compile.compile('mymodule.py')
```
Running the above script will create a mymodule.cpython-<version>.pyc file in the __pycache__ directory.
## Summary
- **Modules**: Files containing Python code (.py files) that define functions, classes, and variables.
- **Using Modules**: Import the module in your script to use its functionalities.
- **Compiled Files**: Python generates .pyc files to store compiled bytecode, which speeds up loading of modules.
Modules in Python help in organizing code, promoting code reuse, and improving maintainability. By following this guide, you can create and use your own modules to structure your Python projects effectively.
