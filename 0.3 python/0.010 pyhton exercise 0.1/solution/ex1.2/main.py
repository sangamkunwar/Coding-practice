def calculate_tip(amount, tip_percentage):
  """
  Calculate the tip for a given amount.
  """
  return amount * (tip_percentage / 100)

# Ask the user for the bill amount and tip percentage
bill_amount = float(input("Enter the bill amount: "))
tip_percentage = float(input("Enter the tip percentage: "))

# Calculate the tip and total amount
tip = calculate_tip(bill_amount, tip_percentage)
total_amount = bill_amount + tip

# Print the results
print(f"Bill Amount: ${bill_amount:.2f}")
print(f"Tip ({tip_percentage}%): ${tip:.2f}")
print(f"Total Amount: ${total_amount:.2f}")
