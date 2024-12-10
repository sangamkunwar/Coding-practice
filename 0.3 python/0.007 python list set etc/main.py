#list
# Creating a list
my_list = [1, 2, 3, 4, 5]
# list method
print(my_list)
my_list.append(6)  # Adds 6 to the end of the list
print(my_list)
my_list.insert(2, 'a')  # Inserts 'a' at index 2
print(my_list)
my_list.remove(3)  # Removes the first occurrence of 3
print(my_list)
element = my_list.pop()  # Removes and returns the last element
element = my_list.pop(2)  # Removes and returns the element at index 2
print(element)
my_list.reverse()  # Reverses the order of elements in the list
print(my_list)
my_list.sort()  # Sorts the list in ascending order
print(my_list)
my_list.sort(reverse=True)  # Sorts the list in descending order
print(my_list)
squares = [x**2 for x in range(10)]  # Creates a list of squares of numbers from 0 to 9
print(squares)
element = my_list[0]  # Accesses the first element
print(element)
sub_list = my_list[1:3]  # Accesses elements from index 1 to 2
print(sub_list)

# Creating a set
my_set = {1, 2, 3, 4, 5}
print(my_set)
my_set.add(6)  # Adds 6 to the set
print(my_set)
my_set.remove(3)  # Removes 3 from the set; raises KeyError if 3 is not found
print(my_set)
my_set.discard(3)  # Removes 3 from the set; does nothing if 3 is not found
print(my_set)
set1 = {1, 2, 3}
set2 = {3, 4, 5}
union_set = set1.union(set2)  # {1, 2, 3, 4, 5}
print(union_set)
intersection_set = set1.intersection(set2)  # {3}
print(intersection_set)
difference_set = set1.difference(set2)  # {1, 2}
print(difference_set)
symmetric_difference_set = set1.symmetric_difference(set2)  # {1, 2, 4, 5}
print(symmetric_difference_set)
is_member = 3 in my_set  # Returns True if 3 is in the set
print(is_member)
squares_set = {x**2 for x in range(10)}  # Creates a set of squares of numbers from 0 to 9
print(squares_set)

# Tuple
# Creating a tuple
my_tuple = (1, 2, 3, 4, 5)
print(my_tuple)
# Accessing elements in a tuple
print(my_tuple[0])  # Accessing the first element
print(my_tuple[1:3])  # Accessing elements from index 1 to 2
# Tuple methods
# Tuples are immutable, so they don't have methods like append, insert, remove, etc.
# Dictionary
# Creating a dictionary
my_dict = {'name': 'Alice', 'age': 30, 'city': 'New York'}
print(my_dict)
# Accessing elements in a dictionary
print(my_dict['name'])  # Accessing the value associated with the key 'name'
# Modifying elements in a dictionary
my_dict['age'] = 31
print(my_dict)
# Adding elements to a dictionary
my_dict['occupation'] = 'Software Engineer'
print(my_dict)
# Deleting elements from a dictionary
del my_dict['city']
print(my_dict)