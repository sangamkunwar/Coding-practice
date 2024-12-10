# Variables in Java

## Introduction
In Java, variables are used to store data that can be used and manipulated throughout the program. Understanding variables is fundamental to learning Java programming.

## Types of Variables
Java has several types of variables, which can be broadly classified into:

1. **Primitive Variables**
2. **Reference Variables**

### Primitive Variables
Primitive variables are the most basic data types in Java. They are predefined by the language and named by a keyword. Java has eight primitive data types:

1. **byte**: 8-bit integer. Example: `byte b = 10;`
2. **short**: 16-bit integer. Example: `short s = 20;`
3. **int**: 32-bit integer. Example: `int i = 30;`
4. **long**: 64-bit integer. Example: `long l = 40L;`
5. **float**: 32-bit floating point. Example: `float f = 5.75f;`
6. **double**: 64-bit floating point. Example: `double d = 19.99;`
7. **char**: Single 16-bit Unicode character. Example: `char c = 'A';`
8. **boolean**: True or false. Example: `boolean bool = true;`

### Reference Variables
Reference variables are created using defined constructors of the classes. They are used to access objects. These variables are declared to be of a specific type that cannot be changed.

Example:
```java
String str = "Hello, World!";
Dog myDog = new Dog();
```
## Declaring Variables
In Java, you need to declare a variable before you can use it. Declaration includes specifying the data type and the variable name.

Syntax:

```java
dataType variableName;
```
Example:

```java
int age;
float salary;
```
## Initializing Variables
Initializing a variable means assigning a value to the variable at the time of declaration or later in the program.

### At the time of declaration:
```java
int age = 25;
float salary = 50000.0f;
```
### After declaration:
```java
int age;
age = 25;
float salary;
salary = 50000.0f;
```
## Variable Scope
The scope of a variable determines where the variable can be accessed within the code.

### Types of Scope:
- **Local Variables**: Declared inside a method or a block and accessible only within that method or block.
- **Instance Variables**: Declared inside a class but outside any method, constructor, or block. Accessible by all methods, constructors, and blocks in the class.
- **Class/Static Variables**: Declared with the static keyword inside a class but outside any method, constructor, or block. These variables are shared among all instances of the class.
Example Code
```java
public class VariableExample {
    // Instance variable
    int instanceVar = 10;

    // Static variable
    static int staticVar = 20;

    public void method() {
        // Local variable
        int localVar = 30;

        System.out.println("Instance Variable: " + instanceVar);
        System.out.println("Static Variable: " + staticVar);
        System.out.println("Local Variable: " + localVar);
    }

    public static void main(String[] args) {
        VariableExample obj = new VariableExample();
        obj.method();
    }
}
```
## Conclusion
Variables are essential in Java for storing and manipulating data. Understanding the different types of variables, their scope, and how to declare and initialize them is crucial for effective programming.