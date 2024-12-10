# Java: A Comprehensive Guide

## Table of Contents
1. [Introduction to Java](#introduction-to-java)
2. [History of Java](#history-of-java)
3. [Key Features of Java](#key-features-of-java)
4. [Uses of Java](#uses-of-java)
5. [Advantages of Java](#advantages-of-java)
6. [Disadvantages of Java](#disadvantages-of-java)
7. [Java Basics](#java-basics)
    - [Hello World](#hello-world)
    - [Variables and Data Types](#variables-and-data-types)
    - [Operators](#operators)
    - [Control Statements](#control-statements)
    - [Loops](#loops)
    - [Methods](#methods)
8. [Object-Oriented Programming in Java](#object-oriented-programming-in-java)
    - [Classes and Objects](#classes-and-objects)
    - [Inheritance](#inheritance)
    - [Polymorphism](#polymorphism)
    - [Encapsulation](#encapsulation)
    - [Abstraction](#abstraction)
9. [Advanced Java Concepts](#advanced-java-concepts)
    - [Collections Framework](#collections-framework)
    - [Multithreading](#multithreading)
    - [Generics](#generics)
    - [Lambda Expressions](#lambda-expressions)
    - [Streams API](#streams-api)
    - [JavaFX](#javafx)

## Introduction to Java
Java is a high-level, class-based, object-oriented programming language that is designed to have as few implementation dependencies as possible. It is a general-purpose programming language intended to let application developers write once, run anywhere (WORA), meaning that compiled Java code can run on all platforms that support Java without the need for recompilation.

## History of Java
Java was developed by James Gosling and his team at Sun Microsystems (which has since been acquired by Oracle Corporation) and released in 1995. The language was initially called Oak but was later renamed to Java.

## Key Features of Java
- **Simple**: Java is designed to be easy to learn and use.
- **Object-Oriented**: Everything in Java is treated as an object, which makes it easy to create modular programs and reusable code.
- **Platform-Independent**: Java code can run on any device that has the Java Virtual Machine (JVM) installed.
- **Secure**: Java provides a secure environment for developing applications.
- **Robust**: Java has strong memory management, exception handling, and type checking mechanisms.
- **Multithreaded**: Java supports multithreading, which allows for the concurrent execution of two or more threads.

## Uses of Java
- **Web Applications**: Java is used to create dynamic web applications.
- **Mobile Applications**: Android development is heavily based on Java.
- **Enterprise Applications**: Java is widely used in enterprise environments for building large-scale applications.
- **Desktop Applications**: Java is used to create cross-platform desktop applications.
- **Scientific Applications**: Java is used in scientific research and simulations.

## Advantages of Java
- **Platform Independence**: Write once, run anywhere.
- **Automatic Memory Management**: Java handles memory management automatically.
- **Rich API**: Java comes with a rich set of APIs for various tasks.
- **Community Support**: Java has a large and active community.
- **Security**: Java provides a secure environment for running applications.

## Disadvantages of Java
- **Performance**: Java can be slower compared to languages like C++.
- **Memory Consumption**: Java applications tend to consume more memory.
- **Verbose Syntax**: Java code can be more verbose compared to languages like Python.

## Java Basics

### Hello World
```java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```
### Variables and Data Types
```java
int number = 10;
double decimal = 5.5;
char letter = 'A';
String text = "Hello, Java";
boolean isJavaFun = true;
```
### Operators
```java
int a = 10;
int b = 20;
int sum = a + b; // Addition
int difference = a - b; // Subtraction
int product = a * b; // Multiplication
int quotient = a / b; // Division
int remainder = a % b; // Modulus
```
### Control Statements
```java
int number = 10;
if (number > 0) {
    System.out.println("Positive number");
} else {
    System.out.println("Negative number");
}
```
### Loops
```java
for (int i = 0; i < 5; i++) {
    System.out.println("i = " + i);
}

int i = 0;
while (i < 5) {
    System.out.println("i = " + i);
    i++;
}
```
### Methods
```java
public class Example {
    public static void main(String[] args) {
        int result = add(5, 10);
        System.out.println("Sum: " + result);
    }

    public static int add(int a, int b) {
        return a + b;
    }
}
```
## Object-Oriented Programming in Java
### Classes and Objects
```java
public class Dog {
    String breed;
    int age;

    void bark() {
        System.out.println("Woof!");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.breed = "Golden Retriever";
        myDog.age = 5;
        myDog.bark();
    }
}
```
### Inheritance
```java
class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Woof!");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.eat();
        myDog.bark();
    }
}
```
### Polymorphism
```java
class Animal {
    void makeSound() {
        System.out.println("Some sound");
    }
}

class Dog extends Animal {
    void makeSound() {
        System.out.println("Woof!");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal myAnimal = new Dog();
        myAnimal.makeSound();
    }
}
```
### Encapsulation
```java
public class Person {
    private String name;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}

public class Main {
    public static void main(String[] args) {
        Person person = new Person();
        person.setName("John");
        System.out.println("Name: " + person.getName());
    }
}
```
### Abstraction
```java
abstract class Animal {
    abstract void makeSound();

    void sleep() {
        System.out.println("This animal sleeps.");
    }
}

class Dog extends Animal {
    void makeSound() {
        System.out.println("Woof!");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.makeSound();
        myDog.sleep();
    }
}
```
## Advanced Java Concepts
### Collections Framework
```java
import java.util.ArrayList;
import java.util.HashMap;

public class CollectionsExample {
    public static void main(String[] args) {
        // ArrayList
        ArrayList<String> list = new ArrayList<>();
        list.add("Apple");
        list.add("Banana");

        // HashMap
        HashMap<String, Integer> map = new HashMap<>();
        map.put("Apple", 1);
        map.put("Banana", 2);
    }
}
```
### Multithreading
```java
class MyThread extends Thread {
    public void run() {
        System.out.println("Thread is running");
    }
}

public class Main {
    public static void main(String[] args) {
        MyThread thread = new MyThread();
        thread.start();
    }
}
```
### Generics
```java
public class GenericExample<T> {
    private T data;

    public GenericExample(T data) {
        this.data = data;
    }

    public T getData() {
        return data;
    }

    public static void main(String[] args) {
        GenericExample<String> example = new GenericExample<>("Hello, Generics");
        System.out.println(example.getData());
    }
}
```
### Lambda Expressions
```java
interface MyInterface {
    void myMethod();
}

public class LambdaExample {
    public static void main(String[] args) {
        MyInterface myInterface = () -> System.out.println("Lambda Expression");
        myInterface.myMethod();
    }
}
```
### Streams API
```java
import java.util.Arrays;
import java.util.List;

public class StreamExample {
    public static void main(String[] args) {
        List<String> items = Arrays.asList("apple", "banana", "orange");
        items.stream()
             .filter(item -> item.startsWith("a"))
             .forEach(System.out::println);
    }
}
```
### JavaFX
```java
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class JavaFXExample extends Application {
    @Override
    public void start(Stage primaryStage) {
        Button btn = new Button();
        btn.setText("Say 'Hello World'");
        btn.setOnAction(event -> System.out.println("Hello World"));

        StackPane root = new StackPane();
        root.getChildren().add(btn);

        Scene scene = new Scene(root, 300, 250);

        primaryStage.setTitle("Hello World!");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
```