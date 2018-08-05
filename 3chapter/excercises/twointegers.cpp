#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // input
    cout << "Enter to integer values: ";
    int val1, val2;
    cin >> val1 >> val2;
    cout << "Your values are:\nVal1: " << val1 << "\nVal2: " << val2 << "\n\n"; 

    // output
    if (val1 < val2) {
        cout << "val1 is smaller than val2.\n";
    } else if (val2 < val1) {
        cout << "val2 is smaller than val1.\n";
    } else {
        cout << "Both numbers are the same.\n";
    }

    cout << "The sum is: " << val1+val2 << '\n';
    cout << "The difference is: " << val1-val2 << '\n';
    cout << "The product is: " << val1*val2 << '\n';
    double dval1 = val1;
    double dval2 = val2;
    cout << "The ratio is: " << dval1/dval2 << '\n';

    return 0;
}
