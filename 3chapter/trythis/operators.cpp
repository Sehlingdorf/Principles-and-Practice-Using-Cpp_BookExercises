#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
    cout << "Please enter a floating point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << n*3
         << "\ntwice n == " << n+n
         << "\nhalf n == " << n/2
         << "\npower 2 of n == " <<  pow(n,2)
         << "\nn squared n == " << sqrt(n) 
         << '\n';
         
}
