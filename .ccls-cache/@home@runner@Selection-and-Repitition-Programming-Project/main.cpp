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

//Perform calculations with nest instead of a switch
  if (operation == '+'){
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  } else if (operation == '-'){
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
  } else {
    cout << "Error: Unsupported operation" << endl;
  }
    
    return 0;

}

//this program was basically the same up until the switch statement. I just removed the switch statement and changed it to a nested if else statement. 