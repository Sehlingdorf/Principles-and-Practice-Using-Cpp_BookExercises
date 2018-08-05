#include <iostream>
#include <string>

using namespace std;

int main() 
{
    cout << "Enter name and age in years:\n";
    string first_name;
    double age;
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name << " (age in months " << age*12 << ")\n";
}

