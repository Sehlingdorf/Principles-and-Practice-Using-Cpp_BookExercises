#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum_in_cents, pennies, nickels, dimes, quarters, half_dollars;
    double sum_in_dollars;

    // input
    cout << "How many Pennies: "; cin >> pennies;
    cout << "How many Nickels: "; cin >> nickels;
    cout << "How many Dimes: "; cin >> dimes;
    cout << "How many Quarters: "; cin >> quarters;
    cout << "How many half Dollars: "; cin >> half_dollars;

    // output 
    cout << "\nYou have:\n";
    cout << pennies << " Pennie"; if (pennies==1) cout << '\n'; else cout << "s\n";
    cout << nickels << " Nickel"; if (nickels==1) cout << '\n'; else cout << "s\n";
    cout << dimes << " Dime"; if (dimes==1) cout << '\n'; else cout << "s\n";
    cout << quarters << " Quarter"; if (quarters==1) cout << '\n'; else cout << "s\n";
    cout << half_dollars << " Half Dollar"; if (half_dollars==1) cout << '\n'; else cout << "s\n";

    sum_in_cents = pennies + 5*nickels + 10*dimes + 25*quarters + 50*half_dollars;
    sum_in_dollars = sum_in_cents/100.0;
    cout << "The value of all your coin is: " << sum_in_cents << " cents, or " << sum_in_dollars << " $.\n"; 

    return 0;
}
