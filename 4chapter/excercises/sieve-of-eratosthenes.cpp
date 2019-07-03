#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void print_primes(vector<bool> primes);

int main() {
    // Initialize
    int max_number = 200;
    vector<bool> primes(max_number);
    for(unsigned int i = 2; i<primes.size(); i++) {
        primes[i] = true;
    }

    // Sieve of Eratosthenes Algorithm
    int sqrt_n = sqrt(max_number);
    for(int i = 2; i<sqrt_n; i++) {
        if(primes[i]) {
            for(int j=i*i; j<max_number; j+=i)
                primes[j] = false;
        }
    }

    // print out the found primes
    cout << "== Primes ==" << endl;
    print_primes(primes);
    return 0;
}

void print_primes(vector<bool> primes) {
    for(unsigned int i=2; i<primes.size(); i++) {
        if(primes[i]) cout << i << " ";
    }
    cout << endl;
}