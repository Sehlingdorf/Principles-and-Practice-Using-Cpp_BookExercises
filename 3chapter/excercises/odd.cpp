#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Numbers (int): ";
    int input;
    cin >> input;

    if (input%2 == 0) {
        cout << input << " is an odd number.\n";
    } else {
        cout << input << " is not an odd number.\n";
    }

    return 0;
}
