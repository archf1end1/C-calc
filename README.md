Basic Command Line Calculator
A simple command-line calculator written in C++ that performs basic arithmetic operations.

Author
archf1end1

Features
Four Basic Operations: Addition, subtraction, multiplication, and division
Input Validation: Robust error handling for invalid inputs
Division by Zero Protection: Prevents division by zero with error handling
Continuous Operation: Option to perform multiple calculations in one session
User-Friendly Interface: Clear prompts and error messages
Requirements
C++ compiler (g++, clang++, or similar)
C++11 or later standard
Compilation
To compile the calculator, use the following command:

bash
g++ -o calculator calculator.cpp
Or with C++ standard specification:

bash
g++ -std=c++11 -o calculator calculator.cpp
Usage
Run the compiled executable:
bash
   ./calculator
Follow the on-screen prompts:
Enter the first number
Enter the second number
Choose an operation (+, -, *, /)
View the result
Choose whether to continue (1) or exit (0)
Example Session
Welcome to Calculator
Enter number: 10
Enter number: 5
Available options are: +, -, *, /
Enter you choice: +
Enter your choice: +
result: 15
Enter 1 to continue
Enter 0 to exit
1
Enter number: 20
Enter number: 0
Available options are: +, -, *, /
Enter you choice: /
Enter your choice: /
Error: Division by 0 is not allowed
Enter 1 to continue
Enter 0 to exit
0
Code Structure
The program is organized into several functions:

add(), sub(), mul(), div(): Arithmetic operation functions
getNumber(): Handles number input with validation
getOption(): Handles operator selection with validation
main(): Main program loop and user interface
Error Handling
Invalid Number Input: The program will repeatedly prompt for valid numeric input
Invalid Operator: Only +, -, *, / are accepted
Division by Zero: Throws a runtime exception with appropriate error message
Invalid Continue Option: Only '0' and '1' are accepted for continuation choice
Technical Details
Uses double precision for all calculations
Implements exception handling for division by zero
Utilizes input stream validation and clearing for robust input handling
Employs std::numeric_limits for proper input buffer management
License
This is a learning project and is provided as-is for educational purposes.

