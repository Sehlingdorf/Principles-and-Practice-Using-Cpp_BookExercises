#include <iostream>

using namespace std;

bool check_correctness(int val1, int val2, int val3) 
{
    if (val1 >= val2 && val2 >= val3) {
        return true;
    } else {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    // input
    cout << "Input 3 numbers to be sorted :";
    int val1, val2, val3;
    cin >> val1 >> val2 >> val3;
    
    // sorting
    int tmp;
    for (int i = 0; i<2; i++) {
        if (val1 < val2) {
            tmp = val1; val1 = val2; val2 = tmp;
        }
        if (val2 < val3) {
            tmp = val2; val2 = val3; val3 = tmp;
        }
    }
    // output
    if (check_correctness(val1, val2, val3)) {
        cout << "Succesfully sorted: " << val1 << " " << val2 << " " << val3 << '\n';
    } else {
        cout << "Unsuccesfully sorted: " << val1 << " " << val2 << " " << val3 << '\n';
    }


    return 0;
}
