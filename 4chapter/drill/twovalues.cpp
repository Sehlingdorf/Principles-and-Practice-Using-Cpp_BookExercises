#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    double val1, val2;
    while (cin >> val1 >> val2) {
        if (val1 > val2) {
            cout << "The smaller value is: " << val2 << endl;
            cout << "The larger value is: " << val1 << endl;
        } else if (val1 < val2) {
            cout << "The smaller value is: " << val1 << endl;
            cout << "The larger value is: " << val2 << endl;
        } else {
            cout << "The numers are equal." << endl;
        }

        if (abs(val1 - val2) < 1./100.) cout << "The number are almost equal." << endl;
    }

    return 0;
}
