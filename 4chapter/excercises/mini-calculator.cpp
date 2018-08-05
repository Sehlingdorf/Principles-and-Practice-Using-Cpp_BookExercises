#include <iostream>
#include <stdexcept>

using namespace std;

int string2int(string number);

int main()
{
  char operation_type;
  double operand1, operand2, result;
  string string_operand_1, string_operand_2;
  bool input_strings;

  while (true){

    cout << "Do you want to input strings? [1=yes, 0=no] "; cin >> input_strings;
    if (input_strings) {
      cout << "Welcome to Mini-Calculator! Enter 2 string (one - nine) and an operation type [+|-|*|/]" << endl;
      cin >> string_operand_1 >> string_operand_2 >> operation_type;
      operand1 = string2int(string_operand_1);
      operand2 = string2int(string_operand_2);
    } else {
      cout << "Welcome to Mini-Calculator! Enter 2 doubles and an operation type [+|-|*|/]" << endl;
      cin >> operand1 >> operand2 >> operation_type;
    }

    switch (operation_type){
      case '+':
        result = operand1 + operand2;
        cout << "The sum of " << operand1 << " and " << operand2 << " is " << result << "." << endl;
        break;
      case '-':
        result = operand1 - operand2;
        cout << "The substraction of " << operand1 << " and " << operand2 << " is " << result <<  "." << endl;
        break;
      case '*':
        result = operand1 * operand2;
        cout << "The product of " << operand1 << " and " << operand2 << " is " << result << "." << endl;
        break;
      case '/':
        result = operand1 / operand2;
        cout << "The division of " << operand1 << " and " << operand2 << " is " << result << "." << endl;
        break;
      default:
        throw runtime_error("Not a valid operation type!");
    }
  }
  return 0;
}

int string2int(string number)
{
  if (number == "one") return 1;
  else if (number == "two") return 2;
  else if (number == "three") return 3;
  else if (number == "four") return 4;
  else if (number == "five") return 5;
  else if (number == "six") return 6;
  else if (number == "seven") return 7;
  else if (number == "eight") return 8;
  else if (number == "nine") return 9;
  else throw runtime_error("Not a valid string number entered!");
}
