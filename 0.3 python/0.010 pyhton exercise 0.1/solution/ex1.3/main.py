# Ask the user for their exam score
score = float(input("Enter your exam score (0-100): "))

# Determine the letter grade using if-else
if 90 <= score <= 100:
    grade = "A"
elif 80 <= score < 90:
    grade = "B"
elif 70 <= score < 80:
    grade = "C"
elif 60 <= score < 70:
    grade = "D"
elif 0 <= score < 60:
    grade = "F"
else:
    grade = "Invalid score"  # Handle invalid inputs outside the 0-100 range

# Print the letter grade
print(f"Your grade is: {grade}")
