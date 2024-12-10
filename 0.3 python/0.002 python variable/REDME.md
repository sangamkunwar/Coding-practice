# Variables in Python

## Introduction
In Python, variables are used to store data values. Unlike other programming languages, Python does not require explicit declaration of the variable type. The type is determined dynamically at runtime.

## Types of Variables

### 1. Integer
An integer is a whole number, positive or negative, without decimals.

```python
x = 10
y = -5
z = 123456789
```
### 2. Float
A float is a number, positive or negative, containing one or more decimals.

```python
a = 1.0
b = -3.14
c = 0.001
```
### 3. String
A string is a sequence of characters enclosed within single, double, or triple quotes.

```python

name = "John"
greeting = 'Hello, World!'
long_text = """This is a
multi-line string."""
```
### 4. Boolean
A boolean variable can only have two values: True or False.

```python
is_active = True
has_permission = False
```
### 5. List
A list is a collection which is ordered and changeable. Allows duplicate members.

```python
fruits = ["apple", "banana", "cherry"]
numbers = [1, 2, 3, 4, 5]
```
### 6. Tuple
A tuple is a collection which is ordered and unchangeable. Allows duplicate members.

```python
coordinates = (10.0, 20.0)
colors = ("red", "green", "blue")
```
### 7. Dictionary
A dictionary is a collection which is unordered, changeable, and indexed. No duplicate members.

```python
Copy code
student = {"name": "John", "age": 20, "courses": ["Math", "Science"]}
```
## Methods in Python
Methods are functions associated with objects. Different types of variables have different methods.

### String Methods
Here are some common string methods:

**upper()**

Converts all characters in the string to uppercase.

```python
text = "hello"
print(text.upper())  # Output: "HELLO"
```
**lower()**

Converts all characters in the string to lowercase.

```python
text = "HELLO"
print(text.lower())  # Output: "hello"
```
**strip()**

Removes any leading and trailing whitespace characters.

```python
text = "  hello  "
print(text.strip())  # Output: "hello"
```
**replace(old, new)**

Replaces occurrences of a substring with another substring.

```python
text = "hello world"
print(text.replace("world", "Python"))  # Output: "hello Python"
```
**split(separator)**

Splits the string into a list using the specified separator.

```python
text = "hello,world"
print(text.split(","))  # Output: ["hello", "world"]
```
**join(iterable)**

Concatenates a list or other iterable into a single string with a specified separator.

```python
words = ["hello", "world"]
separator = " "
print(separator.join(words))  # Output: "hello world"
```
### List Methods

Here are some common list methods:

**append()**

Adds an element to the end of the list.

```python
fruits = ["apple", "banana"]
fruits.append("cherry")
print(fruits)  # Output: ["apple", "banana", "cherry"]
```
**remove()**

Removes the first occurrence of the specified element.

```python
fruits = ["apple", "banana", "cherry"]
fruits.remove("banana")
print(fruits)  # Output: ["apple", "cherry"]
```
**sort()**

Sorts the list in ascending order.

```python
numbers = [3, 1, 2]
numbers.sort()
print(numbers)  # Output: [1, 2, 3]
```
## Conclusion

Variables in Python are versatile and easy to use. Understanding the types of variables and their associated methods is crucial for effective programming. This guide covers the basics, but there are many more methods and data types to explore as you advance in Python.