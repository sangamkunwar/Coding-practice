# from math import * 
import math #importing a module called math for py 
# here are some basic math function
def greet(name):
  return f"hello {name}"
def add(a, b):
  """This function adds two numbers"""
  return a + b

def subtract(a, b):
  """This function subtracts one number from another"""
  return a - b
def area(length, width):
  return length * width
def perimeter(length, width):
  return 2 * (length + width)
def volume(length, width, height):
  return length * width * height
def surface_area(length, width, height):
  return 2 * (length * width + length * height + width * height)
def circumference(radius):
  return 2 * math.pi * radius #here math.pi means here is a pi in math π which is 3.14 used to find the circumference of a circle area etc we import pi from math module so it is written math.pi
def area_of_circle(radius):
  return math.pi * radius ** 2
def volume_of_sphere(radius):
  return (4/3) * math.pi * radius ** 3
def surface_area_of_sphere(radius):
  return 4 * math.pi * radius ** 2
def volume_of_cylinder(radius, height):
  return math.pi * radius ** 2 * height
def surface_area_of_cylinder(radius, height):
  return 2 * math.pi * radius * (radius + height)
def volume_of_cone(radius, height):
  return (1/3) * math.pi * radius ** 2 * height
