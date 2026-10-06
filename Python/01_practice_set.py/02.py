# Write a python program to print the contents of a directory using the os module. Search online for the function which does that.

# Import the os module to work with directories and files
import os

# Specify the directory path
# "." means the current working directory
path = "."

# Get a list of all files and folders in the directory
contents = os.listdir(path)

# Print a heading
print("Contents of the directory are:")

# Loop through each item in the directory
for item in contents:
    # Print the name of each file or folder
    print(item)