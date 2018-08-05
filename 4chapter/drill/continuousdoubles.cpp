#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <algorithm>

using namespace std;

int unit2int(string unit) {
    if (unit == "m") return 0;
    else if (unit == "cm") return 1;
    else if (unit == "in") return 2;
    else if (unit == "ft") return 3;
    else return -1;
}

double sum_vector(vector<double> numbers) {
    double sum = 0.;
    for (double number : numbers) sum += number;
    return sum;
}

int main(int argc, char const *argv[])
{
    // conversion constants
    constexpr double m2cm = 100.;
    constexpr double in2cm = 2.54;
    constexpr double ft2in = 12;

    // continuous number input
    vector<double> numbers;
    string unit;
    double number, max = 0., min = 0.;

    while (cin >> number >> unit) {
        // convert to [m] before storing into vector
        double conversion_factor = 1.;

        switch (unit2int(unit)) {
            case 0: // m
                break;
            case 1: // cm
                number *= 1./m2cm;
                break;
            case 2: // in
                number *= 1./(m2cm/in2cm);
                break;
            case 3: // ft
                number *= 1./(m2cm/in2cm/ft2in);
                break;
            default:
                throw runtime_error("Unit not known!");
        }
        
        numbers.push_back(number);

        cout << number;
        if (number >= max || numbers.size() == 1) {
            cout << " is the largest [m] value\n"; 
            max = number;
        }
        if (number <= min || numbers.size() == 1) {
            cout << " is the smallest [m] value\n";
            min = number;
        }
    }

    // print summary
    cout << endl <<  "========Summary========" << endl;
    cout << "The smallest value in [m]: " << min << endl;
    cout << "The largest value in [m]: " << max << endl;
    cout << "Number of values is: " << numbers.size() << endl;
    cout << "Sum of all in [m]: " << sum_vector(numbers) << endl;

    // print sorted vector
    cout << endl << "==Sorted values==" << endl;
    sort(numbers.begin(), numbers.end());
    for (double number : numbers) cout << number << '\t';
    cout << endl;

    return 0;
}
