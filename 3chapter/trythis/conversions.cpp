#include <iostream>

using namespace std;

int main()
{
    double d = 0;
    while (cin >> d) {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d << '\n'
             << "i==" << i << '\n'
             << "c==" << c << '\n'
             << "i2==" << i2 << '\n';
    }    
}
