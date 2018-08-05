#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check_if_disliked(string word, vector<string> disliked_words) {
    for (string disliked_word : disliked_words)
        if (disliked_word == word) return 1;
    return 0;
}

int main(int argc, char const *argv[])
{
    // disliked words
    vector<string> disliked_words = {"Broccoli", "Salad", "Vegan"};

    // get the input
    cout << "Type in words and the disliked ones are going to be bleeped out:\n";

    vector<string> words;
    for (string word; cin >> word;)
        words.push_back(word);

    // output, with BLEEP's if necessary
    for (string word : words){
        if (check_if_disliked(word, disliked_words)) cout << "BLEEP ";
        else cout << word << " ";
    }
    cout << '\n';

    return 0;
}
