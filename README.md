# C Programming Cheatsheet

This cheatsheet provides a quick syntax revision of the C language. It is helpful for students revising before exams or professionals quickly referencing C language syntax. 

## Table of Contents

- [Basics](#basics)
  - [Boilerplate Code](#boilerplate-code)
  - [Comments](#comments)
- [Data Types](#data-types)
- [Escape Sequences](#escape-sequences)
- [Conditional Instructions](#conditional-instructions)
- [Iterative Statements](#iterative-statements)
- [Functions & Recursion](#functions--recursion)
- [Pointers](#pointers)
- [Arrays](#arrays)
- [Strings](#strings)
- [Structures](#structures)
- [File Handling](#file-handling)
- [Dynamic Memory Allocation](#dynamic-memory-allocation)

---

## Basics

### Boilerplate Code
```c
#include<stdio.h> // header files
int main() // main function
{
    // Your code here
    return 0; // returning value to int main()
}
```

### printf Function
Used to show output on the screen:
```c
printf("Hello World!");
```

### scanf Function
Used to take input from the user:
```c
int a;
scanf("%d", &a); // Store keyboard input in the variable `a`
printf("%d", a);
```

### Comments
- **Single-line Comment:**
  ```c
  // This is a single-line comment
  ```
- **Multi-line Comment:**
  ```c
  /* This is a 
     multi-line comment */
  ```

---

## Data Types

### Character Type
```c
char variable_name;
printf("%c", variable_name);
```

### Integer Type
```c
int variable_name;
printf("%d", variable_name);
```

### Float Type
```c
float variable_name;
printf("%f", variable_name);
```

### Double Type
```c
double variable_name;
printf("%lf", variable_name);
```

### Void Type
Used for functions that return no value:
```c
void functionName() {
    // code
}
```

---

## Escape Sequences
- **Newline (\n):** Moves to the next line.
- **Tab (\t):** Adds a tab space.
- **Backslash (\\):** Adds a backslash.
- **Single Quote (\'):** Adds a single quotation mark.
- **Null (\0):** Represents the null character.

Example:
```c
printf("Line one\nLine two");
```

---

## Conditional Instructions

### If Statement
```c
if (condition) {
    // code
}
```

### If-else Statement
```c
if (condition) {
    // code
} else {
    // code
}
```

### Switch Case Statement
```c
switch (expression) {
    case constant:
        // code
        break;
    default:
        // code
}
```

---

## Iterative Statements

### while Loop
```c
while (condition) {
    // code
}
```

### do-while Loop
```c
do {
    // code
} while (condition);
```

### for Loop
```c
for (int i = 0; i < n; i++) {
    // code
}
```

### Break and Continue
- **Break:** Terminates the loop.
- **Continue:** Skips to the next iteration.

Example:
```c
for (int i = 0; i < 10; i++) {
    if (i == 5) break;
    if (i % 2 == 0) continue;
    printf("%d ", i);
}
```

---

## Functions & Recursion

### Function Definition
```c
return_type function_name(parameters) {
    // code
    return value;
}
```

### Recursion
```c
void recursiveFunction() {
    // code
    recursiveFunction();
}
```

---

## Pointers

### Declaration
```c
int *pointer;
```

### Dereferencing
```c
int x = 10;
int *ptr = &x;
printf("%d", *ptr); // Prints value of x
```

---

## Arrays

### Declaration
```c
int array[10];
```

### Accessing Elements
```c
int value = array[index];
```

---

## Strings

### Declaration
```c
char str[50];
```

### String Functions
- **strlen:** Calculate string length.
- **strcpy:** Copy strings.
- **strcat:** Concatenate strings.
- **strcmp:** Compare strings.

---

## Structures

### Syntax
```c
struct StructureName {
    dataType member1;
    dataType member2;
};
```

### Typedef Keyword
```c
typedef struct {
    int x;
    int y;
} Point;
```

---

## File Handling

### File Operations
- **Opening:**
  ```c
  FILE *file = fopen("filename.txt", "w");
  ```
- **Reading/Writing:**
  ```c
  fprintf(file, "Hello World");
  fscanf(file, "%s", buffer);
  ```
- **Closing:**
  ```c
  fclose(file);
  ```

---

## Dynamic Memory Allocation

### malloc
```c
ptr = (type *)malloc(size);
```

### calloc
```c
ptr = (type *)calloc(n, size);
```

### free
```c
free(ptr);
```

### realloc
```c
ptr = realloc(ptr, new_size);
