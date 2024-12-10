try:
  x = int(input("Enter a number: "))
  print("You entered:", x)
except ValueError:
  print("That's not a valid number!")
try:
  x = int(input("Enter a number: "))
  y = int(input("Enter another number: "))
  result = x / y
  print("Result:", result)
except ValueError:
  print("One of the inputs is not a valid number!")
except ZeroDivisionError:
  print("You can't divide by zero!")
try:
  x = int(input("Enter a number: "))
  y = int(input("Enter another number: "))
  result = x / y
except ValueError:
  print("One of the inputs is not a valid number!")
except ZeroDivisionError:
  print("You can't divide by zero!")
else:
  print("Result:", result)
try:
  x = int(input("Enter a number: "))
  y = int(input("Enter another number: "))
  result = x / y
except ValueError:
  print("One of the inputs is not a valid number!")
except ZeroDivisionError:
  print("You can't divide by zero!")
else:
  print("Result:", result)
finally:
  print("Execution complete!")
