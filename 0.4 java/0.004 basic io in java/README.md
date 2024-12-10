# Basic Console I/O in Java

## Introduction
Java provides several ways to handle input and output operations through the console. This guide will cover the basics of reading input from the user and writing output to the console.

## Table of Contents
1. [Reading Input from Console](#reading-input-from-console)
    - [Using `Scanner`](#using-scanner)
    - [Using `BufferedReader`](#using-bufferedreader)
2. [Writing Output to Console](#writing-output-to-console)
    - [Using `System.out.print` and `System.out.println`](#using-systemoutprint-and-systemoutprintln)
3. [Example Program](#example-program)
4. [Conclusion](#conclusion)

## Reading Input from Console

### Using `Scanner`
The `Scanner` class is part of the `java.util` package and provides methods to read various types of input from the console.

#### Example
```java
import java.util.Scanner;

public class ConsoleInput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        System.out.print("Enter your age: ");
        int age = scanner.nextInt();

        System.out.println("Name: " + name);
        System.out.println("Age: " + age);

        scanner.close();
    }
}
```
### Using `BufferedReader`
The BufferedReader class, in combination with InputStreamReader, is another way to read input from the console.

#### Example
```java
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class ConsoleInput {
    public static void main(String[] args) {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        try {
            System.out.print("Enter your name: ");
            String name = reader.readLine();

            System.out.print("Enter your age: ");
            int age = Integer.parseInt(reader.readLine());

            System.out.println("Name: " + name);
            System.out.println("Age: " + age);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```
## Writing Output to Console
### Using `System.out.print` and `System.out.println`
The System.out object provides methods to print text to the console.

#### Examples
- **System.out.print**: Prints text without a newline.
- **System.out.println**: Prints text followed by a newline.
```java
public class ConsoleOutput {
    public static void main(String[] args) {
        System.out.print("Hello, ");
        System.out.print("world! ");
        System.out.println("This is a new line.");
        System.out.println("This is another line.");
    }
}
```
## Example Program
Combining input and output operations, here is a simple program that reads a user's name and age, then prints a greeting message.

```java
Copy code
import java.util.Scanner;

public class Greeting {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        System.out.print("Enter your age: ");
        int age = scanner.nextInt();

        System.out.println("Hello, " + name + "! You are " + age + " years old.");

        scanner.close();
    }
}
```
Conclusion
This guide covered the basics of console I/O in Java, focusing on reading input from the user and writing output to the console using Scanner, BufferedReader, and System.out methods. With these tools, you can interact with users through the console in your Java applications.