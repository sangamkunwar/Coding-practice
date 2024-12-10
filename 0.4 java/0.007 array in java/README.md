# Java Arrays

## Introduction
An array is a collection of variables that are accessed with an index number. They are used to store multiple values of the same type in a single variable.

## Declaring and Initializing Arrays

### Declaration
To declare an array, you specify the type of its elements and use square brackets.

```java
int[] numbers;
String[] names;
```
### Initialization
You can initialize an array when you declare it or afterwards.

- At the Time of Declaration
```java
int[] numbers = {1, 2, 3, 4, 5};
String[] names = {"Alice", "Bob", "Charlie"};
```
- After Declaration
```java
int[] numbers = new int[5]; // An array of 5 integers
numbers[0] = 1;
numbers[1] = 2;
numbers[2] = 3;
numbers[3] = 4;
numbers[4] = 5;
```
## Accessing Array Elements
Array elements are accessed by their index, which starts at 0.

```java
int[] numbers = {1, 2, 3, 4, 5};
System.out.println(numbers[0]); // Outputs 1
System.out.println(numbers[4]); // Outputs 5
```
## Array Length
The length of an array can be determined using the length property.

```java
int[] numbers = {1, 2, 3, 4, 5};
System.out.println("The length of the array is: " + numbers.length);
```
### Looping Through Arrays
You can use loops to iterate through arrays.

### Using a for Loop
```java
int[] numbers = {1, 2, 3, 4, 5};
for (int i = 0; i < numbers.length; i++) {
    System.out.println("Element at index " + i + ": " + numbers[i]);
}
```
### Using an Enhanced for Loop (for-each Loop)
```java
int[] numbers = {1, 2, 3, 4, 5};
for (int number : numbers) {
    System.out.println("Number: " + number);
}
```
## Multidimensional Arrays
Java supports multidimensional arrays (arrays of arrays).

### Declaring and Initializing a Two-Dimensional Array
```java
int[][] matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```
### Accessing Elements of a Two-Dimensional Array
```java
int[][] matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
System.out.println("Element at row 1, column 2: " + matrix[1][2]); // Outputs 6
```
### Looping Through a Two-Dimensional Array
```java
int[][] matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
for (int i = 0; i < matrix.length; i++) {
    for (int j = 0; j < matrix[i].length; j++) {
        System.out.println("Element at row " + i + ", column " + j + ": " + matrix[i][j]);
    }
}
```
## Conclusion
Arrays are a fundamental data structure in Java that allow you to store and manage multiple values efficiently. Understanding how to declare, initialize, and manipulate arrays is essential for Java programming.