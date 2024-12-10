# Java Loops and Conditionals

## Introduction
Loops and conditionals are fundamental concepts in Java that allow you to control the flow of your program. Conditionals let you execute code based on certain conditions, while loops let you repeat code multiple times.

## Conditionals

### if Statement
The `if` statement executes a block of code if a specified condition is true.

```java
int age = 18;
if (age >= 18) {
    System.out.println("You are an adult.");
}
```
### if-else Statement
The if-else statement provides an alternative block of code to execute if the condition is false.

```java
int age = 16;
if (age >= 18) {
    System.out.println("You are an adult.");
} else {
    System.out.println("You are not an adult.");
}
```
### if-else-if Ladder
The if-else-if ladder is used to test multiple conditions.

```java
int score = 85;
if (score >= 90) {
    System.out.println("Grade: A");
} else if (score >= 80) {
    System.out.println("Grade: B");
} else if (score >= 70) {
    System.out.println("Grade: C");
} else {
    System.out.println("Grade: F");
}
```
## switch Statement
The switch statement allows a variable to be tested for equality against a list of values.

```java
int day = 3;
switch (day) {
    case 1:
        System.out.println("Monday");
        break;
    case 2:
        System.out.println("Tuesday");
        break;
    case 3:
        System.out.println("Wednesday");
        break;
    // other cases
    default:
        System.out.println("Invalid day");
}
```
## Loops
### for Loop
The for loop is used to execute a block of code a certain number of times.

```java
for (int i = 0; i < 5; i++) {
    System.out.println("i: " + i);
}
```
### while Loop
The while loop executes a block of code as long as a specified condition is true.

```java
int i = 0;
while (i < 5) {
    System.out.println("i: " + i);
    i++;
}
```
### do-while Loop
The do-while loop is similar to the while loop, but it executes the block of code at least once.

```java
int i = 0;
do {
    System.out.println("i: " + i);
    i++;
} while (i < 5);
```
### Enhanced for Loop (for-each Loop)
The enhanced for loop is used to iterate through elements in an array or a collection.

```java
int[] numbers = {1, 2, 3, 4, 5};
for (int number : numbers) {
    System.out.println("Number: " + number);
}
```
## Conclusion
Loops and conditionals are essential for controlling the flow of your Java programs. They allow you to execute code based on conditions and repeat code multiple times efficiently.