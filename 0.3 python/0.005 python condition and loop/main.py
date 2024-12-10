#loops in python
#loops mean to reapite a task reapetly
#there are two types of loops in python
#1.for loop
#2.while loop
#for loop
#for loop is used to reapeat a task reapetly
#for loop is used to iterate over a sequence
#normal forloop
print("for loop\n")
for i in range(5):#this is a forloop 
  '''
  synntex of a forloop
  for variable in sequence:
    #code
  '''
  #it will print 0 to 4
  #the range mean to rapeat the task which is under the breacket
  print(i)


#for loop with list
print(f"for loop with list\n")
list1=["sangam","shubham","rahul","rohit"]
for i in list1:#what it does is that the i is a variable which is used to store the value of list1 and print the  i value
  #the first value of i is sangam and the second value is shubham and so on untill the last value of list1
  #it will print sangam,shubham,rahul,rohit
  print(i)


#for loop with controling range
print("for loop with controling range\n")
for i in range(1,5):#the inital value is 1 and the last value is 5-1=4
  print(i)



#for loop with controling range and step
print("for loop with controling range and step\n")
for i in range(1,5,2):#the inital value is 1 and the last value is 5
  '''
  This code snippet is an example of a for loop in Python with a step value. Here's a breakdown:

for i in range(1, 5, 2): This line is the core of the for loop. It does the following:

for i in ...: This part sets up a loop where the variable i will take on different values.
range(1, 5, 2): This is the range function. It generates a sequence of numbers:
Starting from 1 (the first argument).
Going up to, but not including, 5 (the second argument).
Increasing by 2 (the third argument) with each iteration.
#the inital value is 1 and the last value is 5: This is a comment explaining the intended behaviour of the range function.

In simpler terms: This loop will iterate over the numbers 1, 3, and then stop because the next number in the sequence would be 5, which is outside of the specified range.

How the loop works:

i is assigned the value 1.
The code block (indented code below this line) is executed with i set to 1.
i is incremented by 2, becoming 3.
The code block is executed again with i set to 3.
i is incremented by 2, becoming 5.
The loop stops because 5 is not included in the range.
This loop is useful when you want to iterate over a sequence of numbers with a specific increment, such as when you only want to process every other number.
'''
  print (i)



# Iterating over a string
print(f"Iterating over a string\n")
for char in "Python":#it take the first value of char and print it and then it take the second value of char and print it and so on untill the last
    print(char)



# Iterating over a tuple
print(f"Iterating over a tuple\n")
colors = ('red', 'green', 'blue')
for color in colors:#it is same as list
    print(color)



# Iterating over a dictionary (keys)
print(f"Iterating over a dictionary (keys)\n")
student_ages = {'Alice': 25, 'Bob': 22, 'Charlie': 23}
for student in student_ages:
    print(student)



# Iterating over dictionary (key-value pairs)
print(f"Iterating over dictionary (key-value pairs)\n")
for student, age in student_ages.items():#there are 2 variable in this code the student take the value of key(because the student is declare at first so it take the value of key) and age take the value of value
    print(f"{student} is {age} years old")



# Iterating over a set
print(f"Iterating over a set\n")
unique_numbers = {1, 2, 3, 4, 5}
for number in unique_numbers:
    print(number)



# Nested for loops to iterate over a matrix
print(f"Nested for loops to iterate over a matrix\n")
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]#it is a list of list
for row in matrix:#It will run till the last value of matrix
    for item in row:#this will run till the last value of row
        print(item)


# Using for loop in list comprehensions
print(f"Using for loop in list comprehensions\n")
squares = [x**2 for x in range(10)]#here the x is a variable which is used to store the value of range and then it will take the square of x
#x*y mean to multiply x and y and x**y mean to take the power of x
print(squares)




# Using else with for loop
print(f"Using else with for loop\n")
for i in range(5):
    print(i)
else:#if the loop condition is then it will print else
    print("Loop is over")


#while loop
print(f"while loop\n")
#while loop is used to reapeat a task reapeatly
#basic while loop
print(f"basic while loop\n")
i = 1
while i < 6:#The while loop requires relevant variables to be ready, in this example we need to define an indexing variable, i, which we set to 1.
  print(i)
  i += 1

#for more information visit https://www.w3schools.com/python/python_while_loops.asp
  
#condition in pyton
print(f"condition in pyton\n")
#there are some condition in python
#1.if condition
#2.if else condition
#3.if elif else condition
#4.nested if condition
#5.match case statement

#if condition
print(f"if condition\n")
#if condition is true then it will run the code
# Basic if statement
x = 10
if x > 5:
    print("x is greater than 5")


# if-else statement
print(f"if-else statement\n")
x = 4
if x > 5:
    print("x is greater than 5")
else:
    print("x is not greater than 5")



# if-elif-else statement
print(f"if-elif-else statement\n")
x = 10
if x > 15:
    print("x is greater than 15")
elif x > 10:
    print("x is greater than 10 but not greater than 15")
elif x > 5:
    print("x is greater than 5 but not greater than 10")
else:
    print("x is 5 or less")



# Nested if statements
print(f"Nested if statements\n")
x = 25
if x > 10:
    print("x is greater than 10")
    if x > 20:
        print("x is also greater than 20")
    else:
        print("x is not greater than 20")



# One-line if statement (ternary operator)
print(f"One-line if statement (ternary operator)\n")
x = 5
result = "x is even" if x % 2 == 0 else "x is odd"
print(result)

#for more detailed information about if condition go to https://www.w3schools.com/python/python_conditions.asp

#all in 1 chat with chat gpt https://chatgpt.com/share/116d1b62-e79a-4ff2-8faa-600b5bc1e3d6
