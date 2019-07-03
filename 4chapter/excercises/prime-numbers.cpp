#include <vector>
#include <iostream>

using namespace std;

void print_primes(vector<int> primes);

int main()
{
    // Initialize
    vector<int> primes = {2};
    int i;
    bool is_prime = true;
    int max_number;

    // Get the max number for prime computation from user
    cout << "Max number: ";
    cin >> max_number;

    for(i=3; i<max_number; i++) {
        //cout << "Testing number: " << i << endl;

        for(int prime : primes) { // test all primes
            if(i%prime == 0) {  // if dividable by prime -> number is not prime
                is_prime = false;
                break;
            }
        }

        // add prime if correct and reset marker
        if(is_prime) primes.push_back(i);
        is_prime = true;
    }

    print_primes(primes);

    return 0;
}

void print_primes(vector<int> primes) {
    cout << "== Primes ==" << endl;
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
}