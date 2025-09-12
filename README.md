C++ Command-Line Calculator
This is a basic command-line calculator written in C++. It can perform fundamental arithmetic operations like addition, subtraction, multiplication, and division on two numbers. The program is designed to be user-friendly, handling common input errors and allowing for multiple calculations in a single session.

Features ✨
Four Basic Operations: Supports +, -, *, and / for simple calculations.

Error Handling: Catches common issues like non-numeric input and division by zero.

Looping: Allows the user to perform multiple calculations without restarting the program.

Clear Prompts: Provides easy-to-understand instructions for entering numbers and selecting operations.

How to Compile and Run 🚀
Prerequisites
You'll need a C++ compiler. g++ is a common choice and is often pre-installed on Linux and macOS systems. You can also use it on Windows through environments like MinGW or Cygwin.

Compilation
Open your terminal or command prompt, navigate to the directory where the source code is saved, and run the following command:

Bash

g++ calculator.cpp -o calculator
This command compiles the calculator.cpp file and creates an executable file named calculator.

Running the Program
After compiling, you can run the executable from your terminal:

Bash

./calculator
How to Use 🖱️
Start the Program: Run the compiled executable as shown above.

Enter Numbers: The program will prompt you to enter the first and second numbers.

Choose an Operation: You will then be asked to select an operation (+, -, *, /) from the available options.

View the Result: The calculated result will be displayed.

Continue or Exit: After each calculation, you'll be prompted to enter '1' to continue with another calculation or '0' to exit the program.

Code Breakdown 👨‍💻
The code is structured into several functions to improve readability and maintainability:

add, sub, mul, div: These functions perform the basic arithmetic operations. The div function includes a try-catch block to handle division by zero, which is crucial for preventing a crash.

getNumber: This function prompts the user for a number and includes a loop to ensure the input is valid. It handles cases where the user enters text instead of a number by clearing the input stream and ignoring the invalid characters.

getOption: This function prompts the user for an operation. It uses a switch statement within a loop to validate the input and ensure the user selects one of the four supported operators.

main: This is the main function that drives the program. It calls the other functions, handles the main program loop, and displays the final result to the user.
