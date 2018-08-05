#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{
    cout << "Enter the name of the person you want to write to: ";
    string receiver;
    cin >> receiver;
    cout << "Dear " << receiver << ",\n";

    cout << "How are you? I am fine. I miss you.\n";

    cout << "Name of the other friend: ";
    string other_friend;
    cin >> other_friend;
    cout << "Have you seen " << other_friend << " lately?\n";

    cout << "Is the friend male (m) of female (f): ";
    char friend_sex;
    cin >> friend_sex;
    if (friend_sex == 'm') {
        cout << "If you see " << other_friend << " please ask him to call me.\n";
    } else if (friend_sex == 'f') {
        cout << "If you see " << other_friend << " please ask her to call me.\n";
    } else {
        cout << "Not a valid sex!\n";
    }

    cout << "Enter age of letter recipient: ";
    int recipient_age;
    cin >> recipient_age;
    if (recipient_age <= 0 || recipient_age > 110) {
        throw std::invalid_argument("You're kidding!");
    } else {
        cout << "I hear you just had a birthday and you are " << recipient_age << " years old.\n";
    }

    if (recipient_age < 12) {
        cout << "Next year you'll be " << recipient_age+1 << " years old.\n";
    } else if (recipient_age == 17) {
        cout << "Next year you'll be allowed to vote.\n";
    } else if (recipient_age > 70) {
        cout << "I hope you are enjoying retirement.\n";
    }

    cout << "Type your name: ";
    string your_name;
    cin >> your_name;
    cout << "Yours sincerely,\n\n\n" << your_name << '\n';
 
    //string concatenation Review 17
    string a = "Fucking ";
    string b = "gold!" ;
    string c = a+b;
    cout << c << '\n';
    
    return 0;
}
