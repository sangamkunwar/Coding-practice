# Input, Output, and Header Files in C++

## Table of Contents
- [Introduction](#introduction)
- [Input in C++](#input-in-c)
- [Output in C++](#output-in-c)
- [Header Files in C++](#header-files-in-c)
  - [Header Guards](#header-guards)
- [Conclusion](#conclusion)

## Introduction
C++ is a versatile programming language that allows developers to create complex applications. Understanding how to handle input and output, as well as how to properly use header files, is essential for writing efficient and maintainable code. This guide will provide an overview of these fundamental concepts.

## Input in C++
Input operations in C++ are typically handled using the standard input stream `std::cin`. This stream is part of the iostream library and allows for the reading of data from the console.

### Basic Input
The most common way to read input from the user is through the extraction operator (`>>`).

```cpp
#include <iostream>

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;
    return 0;
}
```
### Input with Strings
For string inputs, std::cin can be used, but it reads input until the first whitespace character. To read an entire line, std::getline is preferred.

```cpp
Copy code
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
```
## Output in C++
Output operations in C++ are performed using the standard output stream std::cout. This stream is also part of the iostream library and is used to print data to the console.

### Basic Output
The most common way to output data is using the insertion operator (<<).

```cpp
Copy code
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```
### Formatted Output
C++ supports formatted output using manipulators such as std::setw, std::setprecision, and others provided by the `<iomanip>` library.

```cpp
Copy code
#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.14159;
    std::cout << "Pi with 2 decimal places: " << std::setprecision(2) << std::fixed << pi << std::endl;
    return 0;
}
```
## Header Files in C++
Header files are files with a .h or .hpp extension that declare the interfaces to functions and classes. They are included in other files using the #include preprocessor directive.

### Creating a Header File
A header file typically contains function prototypes, class definitions, and macro definitions.

**example.h**

```cpp
#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <iostream>

inline void sayHello() {
    std::cout << "Hello World!" << std::endl;//defining sayHello
}

#endif // EXAMPLE_H
```

### Including a Header File
To use the declarations in a header file, include it in your source file using #include.

**main.cpp**

```cpp
#include "example.h"

int main() {
    sayHello();//we don't need to define saythello in this file
    return 0;
}

```
### Header Guards
Header guards are a common C++ preprocessor technique used to prevent multiple inclusions of the same header file. This ensures that the compiler processes the contents of the header file only once, avoiding redefinition errors.

**Explanation of Header Guards:***

**#ifndef EXAMPLE_H**: This checks if the macro EXAMPLE_H has not been defined yet.
**#define EXAMPLE_H**: If EXAMPLE_H has not been defined, it defines the macro EXAMPLE_H. This means any subsequent inclusions of this file will find the macro already defined.
**#endif // EXAMPLE_H**: This ends the conditional preprocessor directive started by #ifndef.
**Example of Header Guards:**

```cpp
#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <iostream>

inline void sayHello() {
    std::cout << "Hello World!" << std::endl;
}

#endif // EXAMPLE_H
```
Why Use Header Guards?

Prevent Multiple Inclusions: Ensures that the header file is included only once in a single compilation, avoiding redefinition errors.
Improve Compilation Speed: Reduces the number of times the compiler needs to process the same file.
## Conclusion
Understanding input, output, and header files is crucial for writing effective C++ programs. By mastering these concepts, you can create interactive applications, manage code organization, and maintain cleaner codebases.
# Which file to look
Visit sequencely
1. `cources/0.002 c++/0.002 input output and header/io input output/main.cpp`
2. `cources/0.002 c++/0.002 input output and header/header/main.cpp`
3. `cources/0.002 c++/0.002 input output and header/header/example.h`
No need to visit `cources/0.002 c++/0.002 input output and header/header/main` because the `cources/0.002 c++/0.002 input output and header/header/main` is made while running main.cpp it is same as .exe
# Hint
**Hint**: Ignore which you didn't understand.