#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_mode(vector<int> numbers);
void print_vector(vector<int> numbers);

int main(){
    // Initialze
    vector<int> numbers = {1,2,3,1,2,1,2,2};

    // Find the mode of vector numbers
    int mode = find_mode(numbers);

    // Final result
    cout << "The 'mode' of the given numbers is: " << mode << endl;

    return 0;
}

int find_mode(vector<int> numbers) {
    // Initialze
    int maxcount = 1;
    int current_count = 1;
    int number_before;
    int mode;

    // sort the vector for easier counting
    sort(numbers.begin(),numbers.end());
    number_before = numbers[0];
    mode = numbers[0];

    // loop through sorted vector and find number with the highest occurence
    for(unsigned int i=1; i<numbers.size(); i++) {
        // increase current count if necessary
        if(numbers[i] == number_before) current_count++;
        else current_count = 1;

        if(maxcount < current_count) {
            cout << "maxcount changed at " << i << endl;
            maxcount = current_count;
            mode = numbers[i];
        }
        number_before = numbers[i];
    }
    cout << "Max count: " << maxcount << endl;
    return mode;
}

void print_vector(vector<int> numbers) {
    cout << "== Printing vector ==" << endl;
    for(int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
}