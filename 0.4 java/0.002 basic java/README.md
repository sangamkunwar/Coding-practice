# Basic Syntax in Java

This guide will help you understand the basic syntax of a simple Java program. We will use the following code as an example:

```java
class Main {
  public static void main(String[] args) {
    System.out.println("hello world");
  }
}
```
## Breakdown of the Code
1. Class Declaration
```java
class Main {
```
- **class**: This keyword is used to declare a class in Java.
- **Main**: This is the name of the class. In Java, the class name should start with a capital letter.
2. Main Method
```java
public static void main(String[] args) {
```
- **public**: This is an access modifier that makes the main method accessible from anywhere.
- **static**: This keyword allows the main method to be called without creating an instance of the class.
- **void**: This means that the main method does not return any value.
- **main**: This is the name of the method. It is the entry point of any Java program.
- **String[] args**: This is an array of strings used to store command-line arguments.
3. Printing to the Console
```java
System.out.println("hello world");
```
- **System**: This is a built-in class in the java.lang package.
- **out**: This is an instance of PrintStream, which is a public and static member field of the System class.
- **println**: This is a method of PrintStream that prints the passed argument to the console and then terminates the line.
4. Closing Braces
```java
}
```
Each opening brace `{` must have a corresponding closing brace `}`.

## Full Code
Here is the full code again for reference:

```java
class Main {
  public static void main(String[] args) {
    System.out.println("hello world");
  }
}
```
## Key Points
- Every Java application must have at least one class definition that contains the `main` method.
- The `main` method is the entry point of any Java program.
- `System.out.println` is used to print text to the console.