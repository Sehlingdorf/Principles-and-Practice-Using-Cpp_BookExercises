#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string number_string = "start";
    while (number_string != "exit") {
        cout << "Enter a number as a string, type 'exit' to exit: ";
        cin >> number_string;
        if (number_string == "zero") cout << "0\n";
        else if (number_string == "one") cout << "1\n";
        else if (number_string == "two") cout << "2\n";
        else cout << "I don't know this number.\n";
    }

    return 0;
}
