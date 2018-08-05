#include <iostream>
#include <stdexcept>

using namespace std;

int main(int argc, char const *argv[])
{
    // currency conversion rates as constexpr
    constexpr double yen2dollar = 0.009;
    constexpr double kroner2dollar = 0.16;
    constexpr double pounds2dollar = 1.31;

    // input value and type of currency
    cout << "Input value followed by currency (yen [y], kroner [k], pound [p]) to be converted to dollar: ";
    double value;
    char currency = ' ';
    cin >> value >> currency;

    // convert to dollar
    double value_in_dollar = 0;
    switch (currency) {
        case 'y':
            value_in_dollar = yen2dollar*value;
            break;
        case 'k':
            value_in_dollar = kroner2dollar*value;
            break;
        case 'p':
            value_in_dollar = pounds2dollar*value;
            break;
        default:
            throw std::runtime_error ("No correct currency given.\n");
            break;
    }

    // output result
    cout << value << currency << " are " << value_in_dollar << "$\n"; 

    return 0;
}
