#normal function
def greet(name):#def tag is use to define a function 
  #we don't use {} to define a function
  #we use : to define a function and under the function we use indentation
  '''
  synntex of a function
  def function_name(parameter):
    #code#here if i didn't tab the code it will not be under the function
  #code#this is not under function
  
  '''
  print ("Hello! ", name)
greet("sangam")#calling a function
#function with 0 parameter (argument)
def greet1():
  print("Hello! by function with 0 parameter")
greet1()
#function with 1 parameter (argument)
def greet2(name):#def tag is use to define a function 
  #we don't use {} to define a function
  #we use : to define a function and under the function we use indentation
  '''
  synntex of a function
  def function_name(parameter):
    #code#here if i didn't tab the code it will not be under the function
  #code#this is not under function

  '''
  print (f"Hello! ${name}")#this is a string formating (f string) we use it to print a string with a variable
greet2("sangam")
#function with 2 parameter (argument)
def greet3(name,age):
  print (f"Hello! ${name} your age is ${age}")
greet3("sangam",12)
# other methode in function in python is same as other language