import random
import string

def generate_password(length=12):
    """
    Generate a random password with letters, numbers, and special characters.
    """
    # Define the character sets
    letters = string.ascii_letters  # a-z, A-Z
    digits = string.digits          # 0-9
    specials = string.punctuation   # Special characters (!, @, #, etc.)

    # Combine all character sets
    all_chars = letters + digits + specials

    # Ensure the password includes at least one letter, digit, and special character
    password = [
        random.choice(letters),
        random.choice(digits),
        random.choice(specials)
    ]

    # Fill the rest of the password length with random characters
    password += random.choices(all_chars, k=length - 3)

    # Shuffle to avoid predictable patterns
    random.shuffle(password)

    # Convert list to string
    return ''.join(password)

# Generate and print a random password
password_length = int(input("Enter the desired password length (minimum 6): "))
if password_length < 6:
    print("Password length must be at least 6 characters.")
else:
    print("Generated Password:", generate_password(password_length))
