//c++ first project a basic command line calculator
//author: archf1end1

#include <iostream>
#include <limits>

double add(double first_num, double second_num) {
  return first_num + second_num;
}

double sub(double first_num, double second_num) {
  return first_num - second_num;
}

double mul(double first_num, double second_num) {
  return first_num * second_num;
}

double div(double first_num, double second_num) {
  if(second_num == 0) {
    throw std::runtime_error("Division by 0 is not allowed");
  }
  return first_num/second_num;
}

double getNumber() {
  double number {};
  std::cout << "Enter number: ";
  while(!(std::cin >> number)) {
    std::cout << "Invalid Input. Enter valid number: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  return number;
}

char getOption() {
  char option {};
  bool valid_option = false;
  while(!valid_option) {
    std::cout << "Available options are: +, -, *, /\n";
    std::cout << "Enter you choice: ";
    std::cin >> option;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch (option) {
      case '+':
      case '-':
      case '*':
      case '/':
        valid_option = true;
      break;
      default:
        std::cout << "Invalid Operator. Enter valid +, -, *, /. \n";
        break;
    }
  }
  return option;
}

int main() {
  char option {};
  std::cout << "Welcome to Calculator\n";

  double first_num {};
  double second_num {};

  bool conti = true;

  while(conti) {
    first_num = getNumber();
    second_num = getNumber();


    std::cout << "Enter your choice: ";
    option = getOption();
    try {
      switch (option) {
        case '+':
          std::cout << "result: " << add(first_num, second_num) << "\n";
          break;
        case '-':
          std::cout << "result: " << sub(first_num, second_num)<< "\n";
          break;
        case '*':
          std::cout << "result: " << mul(first_num, second_num) << "\n";
          break;
        case '/':
          std::cout << "result: " << div(first_num, second_num) << "\n";
          break;
      }
    } catch (const std::runtime_error& e) {
      std::cout << "Error: " << e.what() << "\n";
    }
    char continue_loop {};
    std::cout << "Enter 1 to continue\n";
    std::cout << "Enter 0 to exit\n";

    while(!(std::cin >> continue_loop) || (continue_loop != '1' && continue_loop != '0')) {
      std::cout << "Enter valid option: ";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if(continue_loop == '0') {
      conti = false;
    }

  }

 return 0;
}
