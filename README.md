# Command Line Calculator

A simple command-line calculator written in **C++**.  
This project allows users to perform basic arithmetic operations (`+`, `-`, `*`, `/`) with input validation and error handling.

---

## Features
- Addition, subtraction, multiplication, and division
- Input validation (prevents invalid number inputs)
- Error handling (division by zero is not allowed)
- User-friendly menu system
- Looping functionality to perform multiple calculations until the user chooses to exit

---

## Installation & Usage

1. Clone or download the project.
2. Compile the source file:
   ```bash
   g++ -o calculator calculator.cpp
Run the program:

bash
Copy code
./calculator
Example Run
vbnet
Copy code
Welcome to Calculator
Enter number: 10
Enter number: 5
Available options are: +, -, *, /
Enter you choice: +
result: 15
Enter 1 to continue
Enter 0 to exit
Error Handling
If the user enters a non-numeric value, they will be asked again until a valid number is provided.

Division by zero will display an error message:

vbnet
Copy code
Error: Division by 0 is not allowed
Author
archf1end1

pgsql
Copy code

Want me to also add a **"Future Improvements"** section (like supporting more operators, power, squ
