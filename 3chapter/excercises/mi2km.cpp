#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter a distance in miles, and we'll convert it to km: ";
    double distance;
    cin >> distance;
    cout << distance << " miles are " << 1.609*distance << "km.\n";
    return 0;
}