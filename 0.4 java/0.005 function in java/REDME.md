# Java Functions

## Introduction
Functions (also called methods) in Java are blocks of code designed to perform a particular task. They help in modularizing the code and reusing it without rewriting.

## Basic Syntax
```java
returnType functionName(parameter1Type parameter1, parameter2Type parameter2, ...) {
    // function body
    // statements
    return value; // if returnType is void, no return statement is needed
}
```
## Example
Here is a simple example of a function that adds two numbers and returns the result:

```java
public class Main {
    public static void main(String[] args) {
        int result = add(5, 3);
        System.out.println("The sum is: " + result);
    }

    public static int add(int a, int b) {
        return a + b;
    }
}
```
### Explanation:
- **public**: Access modifier, the function is accessible from other classes.
- **static**: Means that the method belongs to the class and not to any specific instance.
- **int**: The return type of the function, indicating it returns an integer.
- **add**: The name of the function.
- **int a, int b**: Parameters of the function, both are of type int.
## Types of Functions
### 1. No Return Type, No Parameters
A function that doesn't take any parameters and doesn't return any value.

```java
public static void greet() {
    System.out.println("Hello, World!");
}
```
### 2. No Return Type, With Parameters
A function that takes parameters but doesn't return any value.

```java
public static void printSum(int a, int b) {
    int sum = a + b;
    System.out.println("The sum is: " + sum);
}
```
### 3. With Return Type, No Parameters
A function that returns a value but doesn't take any parameters.

```java
public static int getTen() {
    return 10;
}
```
### 4. With Return Type, With Parameters
A function that takes parameters and returns a value.

```java
public static int multiply(int a, int b) {
    return a * b;
}
```
## Function Overloading
Java allows functions to have the same name with different parameters. This is called function overloading.

```java
public class Main {
    public static void main(String[] args) {
        System.out.println(add(2, 3));       // calls add(int, int)
        System.out.println(add(2.5, 3.5));   // calls add(double, double)
    }

    public static int add(int a, int b) {
        return a + b;
    }

    public static double add(double a, double b) {
        return a + b;
    }
}
```
## Conclusion
Functions are a fundamental concept in Java programming. They help in organizing the code, making it modular, and promoting code reuse. Understanding how to define and use functions is crucial for writing efficient Java programs.