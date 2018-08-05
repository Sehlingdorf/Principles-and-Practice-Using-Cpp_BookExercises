#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    // input
    cout << "Type in operation (operation operand1 operand2): ";
    string operation;
    double operand1, operand2;
    cin >> operation >> operand1 >> operand2;

    // ouput
    if (operation == "+") {
        cout << "Result: " << operand1+operand2 << '\n';
    } else if (operation == "-") {
        cout << "Result: " << operand1-operand2 << '\n';
    } else if (operation == "*") {
        cout << "Result: " << operand1*operand2 << '\n';
    } else if (operation == "/") {
        cout << "Result: " << operand1/operand2 << '\n';
    } else {
        cout << "Not known operation.";
    }

    return 0;
}
