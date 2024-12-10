def safe_divide(a, b):
  """
  Perform division and handle division by zero errors.
  """
  try:
      result = a / b
  except ZeroDivisionError:
      return "Error: Cannot divide by zero!"
  return result

# Ask the user for two numbers
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Perform safe division and print the result or error message
result = safe_divide(num1, num2)
print(f"Result: {result}")
