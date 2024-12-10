# Initialize an empty contact list
contact_list = []

def add_contact(name, phone, email):
    """
    Add a new contact to the contact list.
    """
    contact = {
        "Name": name,
        "Phone": phone,
        "Email": email
    }
    contact_list.append(contact)

# Get contact details from the user
name = input("Enter contact name: ")
phone = input("Enter contact phone number: ")
email = input("Enter contact email: ")

# Add the new contact to the list
add_contact(name, phone, email)

# Print the updated contact list
print("\nUpdated Contact List:")
for index, contact in enumerate(contact_list, start=1):
    print(f"{index}. Name: {contact['Name']}, Phone: {contact['Phone']}, Email: {contact['Email']}")
