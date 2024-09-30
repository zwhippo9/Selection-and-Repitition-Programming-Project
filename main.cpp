//This program is a simple calculator. It can perform basic addition and subtraction of integers. It will give an error if another operation is asked or an integer is not given.
#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  char operation;

//Take two intergers from the user
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

//Specify mathmatical operation
  cout << "Enter the mathmatical operation (+ or -): ";
  cin >> operation;

//Perform calculations
switch (operation) {
  case '-' :
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
  break;
  case '+' :
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  break;
  default:
  cout << " Error: Unsuported operation." << endl;

}

  return 0;

}

