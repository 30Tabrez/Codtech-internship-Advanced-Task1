# Codtech-internship-Advanced-Task1

# File Handling Program

## Overview
This C program demonstrates basic file handling operations such as creating, reading, writing, and appending data to a file. It allows users to perform operations on text files, providing a simple interface for managing file data. The program supports operations such as:

1. Creating a new file.
2. Writing data to the file.
3. Reading data from the file.
4. Appending data to the existing file.

---

## Features
1. **Create a File**:
   - Allows the user to create a new file or open an existing one.
   
2. **Write to a File**:
   - Writes the input data to the file.
   - The data is overwritten if the file already exists.

3. **Read from a File**:
   - Reads and displays the contents of the file to the user.

4. **Append to a File**:
   - Adds new data to the end of the file without overwriting existing data.

---

## Instructions
1. **Menu Options**:
   The program presents a menu with the following choices:
   - **1. Create/Write to File**: Creates a new file or overwrites an existing file with input data.
   - **2. Read from File**: Displays the contents of the file.
   - **3. Append to File**: Appends new data to an existing file.
   - **4. Exit**: Exits the program.

2. **File Operations**:
   - **Write Operation**: The user is prompted to enter text, which is written to the file.
   - **Read Operation**: Displays the contents of the file.
   - **Append Operation**: Adds text at the end of the file without modifying its current contents.

---

## How to Use
1. **Menu Navigation**:
   - When the program starts, the user is presented with a menu to select the desired operation.
   - Based on the user's choice, the program prompts for the necessary input and performs the corresponding file operation.

2. **Example Usage**:
   - To **create and write to a file**, select option 1 and enter text.
   - To **read from the file**, select option 2.
   - To **append data to an existing file**, select option 3 and provide the new content.

---

## Compilation and Execution
1. Save the program code in a file named `file_handling.c`.
2. Open a terminal and compile the program:
   ```bash
   gcc file_handling.c -o file_handling
   ```
3. Run the program:
   ```bash
   ./file_handling
   ```

---

## Sample Screenshots

### **Main Menu**
The user is prompted with a menu to choose between different file operations.

![Main Menu Screenshot](https://via.placeholder.com/600x200.png?text=Main+Menu+Example)

### **Create and Write to File**
Input Example:  
```
Enter the text you want to write to the file: Hello, World!
```

Output:  
```
File created successfully. Text written to file.
```

### **Read from File**
Input Example:  
```
Reading the contents of the file...
```

Output:  
```
Hello, World!
```

### **Append to File**
Input Example:  
```
Enter the text you want to append to the file: This is an appended line.
```

Output:  
```
Text appended successfully.
```

---

## Code Walkthrough

1. **Main Functionality**:
   - The program begins by displaying the main menu and takes input for the user's choice.
   - Based on the selected operation, the program either creates, reads, or appends to a file.

2. **File Handling Functions**:
   - `createWriteFile()`: Creates a new file or overwrites an existing file, and writes data to it.
   - `readFile()`: Opens the file in read mode and displays its content.
   - `appendToFile()`: Appends new data to an existing file.

3. **Error Handling**:
   - The program includes basic error handling to check whether the file operations are successful.
   - If a file is not found during read or append operations, appropriate error messages are displayed.

---

## Future Enhancements
1. **File Type Support**: Support for binary files in addition to text files.
2. **Error Handling**: Improve error handling by providing more specific messages and options for users.
3. **File Permissions**: Add the ability to manage file permissions during creation or modification.

---

## License
This project is released under the MIT License.

---

## Contributions
Feel free to contribute by submitting pull requests, issues, or suggestions.

---


