#include <string>
#include <iostream>
#include <vector>

using namespace std;

void list_pairs(vector<string> names, vector<int> scores);

void find_by_names(vector<string> names, vector<int> scores);

void find_by_scores(vector<string> names, vector<int> scores);

int main()
{
    vector<string> names;
    vector<int> scores;

    string tmp_name;
    int tmp_score;

    cout << "Enter [Name|Score] pairs. To finish enter [NoName|0]: " << endl;
    while(true) {
        cin >> tmp_name >> tmp_score;
        if(tmp_name == "NoName" && tmp_score == 0) break;
        names.push_back(tmp_name);
        scores.push_back(tmp_score);
    }

    list_pairs(names, scores);
    find_by_names(names,scores);
    find_by_scores(names,scores);

    return 0;
}

void list_pairs(vector<string> names, vector<int> scores) {
    cout << endl << "Names" << '\t' << "Scores" << endl;
    cout << "---------------------------" << endl;
    for(unsigned int i = 0; i<names.size(); i++) {
        cout << names[i] << '\t' << scores[i] << endl;
    }
}

void find_by_names(vector<string> names, vector<int> scores){
    bool name_found;
    string tmp_name;
    cout << endl << "Enter names you want to find. To finish type 'exit':" << endl;
    while(true) {
        cin >> tmp_name;
        name_found = false;
        if(tmp_name=="exit") break;
        for(unsigned int i = 0; i<names.size(); i++) {
            if(names[i] == tmp_name) { cout << "Score: " << scores[i] << endl; name_found = true;}
        }
        if(!name_found) {cout << "Name not found." << endl;}
    }
}

void find_by_scores(vector<string> names, vector<int> scores){
    bool score_found;
    int tmp_score;
    cout << endl << "Enter the score you want to find . To finish type '-1':" << endl;
    while(true) {
        cin >> tmp_score;
        score_found = false;
        if(tmp_score == -1) break;
        for(unsigned int i = 0; i<scores.size(); i++) {
            if(scores[i] == tmp_score) { cout << "Name: " << names[i] << endl; score_found = true;}
        }
        if(!score_found) {cout << "Score not found." << endl;}
    }
}