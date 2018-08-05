#include <iostream>

using namespace std;

int square(int value);

int main(int argc, char const *argv[])
{
    cout << "Integer you want to square: ";
    int input;
    cin >> input;
    cout << "square of " << input << " is " << square(input) << '\n';      
    return 0;
}

int square(int value) 
{
    int result = 0;
    for (int i=0; i< value; i++){
        result += value;
    }
    return result; 
}