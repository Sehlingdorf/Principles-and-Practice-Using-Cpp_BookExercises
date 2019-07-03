#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// declared functions
void print_strings(vector<string> strings);

string find_mode_strings(vector<string> strings);

int main()
{
    vector<string> strings = {"Hallo","Tobias","Hallo", "hallo", "Arschloch", "!","!!","!\"","Tobias","Tobias"};

    cout << "== Initial Strings ==" << endl;
    print_strings(strings);

    cout << "== Sorted Strings ==" << endl;
    sort(strings.begin(),strings.end());
    print_strings(strings);

    cout << "== Max String ==" << endl << strings.back() << endl;
    cout << "== Min String ==" << endl << strings[0] << endl;

    cout << "== Mode of strings ==" << endl;
    string mode = find_mode_strings(strings);
    cout << "Mode: " << mode << endl;

    return 0;
}

//definition of declared functions
string find_mode_strings(vector<string> strings){
    // Initialze
    int maxcount = 1;
    int current_count = 1;
    string string_before;
    string mode;

    // sort the vector for easier counting
    sort(strings.begin(),strings.end());
 string_before = strings[0];
    mode = strings[0];

    // loop through sorted vector and find number with the highest occurence
    for(unsigned int i=1; i<strings.size(); i++) {
        // increase current count if necessary
        if(strings[i] == string_before) current_count++;
        else current_count = 1;

        if(maxcount < current_count) {
            cout << "maxcount changed at " << i << endl;
            maxcount = current_count;
            mode = strings[i];
        }
     string_before = strings[i];
    }
    cout << "Max count: " << maxcount << endl;
    return mode;
}

void print_strings(vector<string> strings) {
    for(string word : strings) {
        cout << word << " ";
    }
    cout << endl;
}