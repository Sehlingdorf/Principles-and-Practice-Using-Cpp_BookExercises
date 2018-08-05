#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // loop over integers and print out all characters
    int i = 0;
    while (i<127) {
        cout << i << '\t' << char(i) << '\n';
        i++;
    }

    for (int j=0; j < 128; j++)
        cout << j << '\t' << char(j) << '\n';

    return 0;
}
