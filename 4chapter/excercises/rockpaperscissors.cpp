#include <iostream>
#include <cstdlib>
#include <stdexcept>

using namespace std;

char get_computers_choice();

int main()
{
  char players_choice, computers_choice;
  bool go_on = true;

  while(go_on)
  {
    cout << "What do you choose: [r]ock [p]aper [s]cissors: ";
    cin >> players_choice;
    
    computers_choice = get_computers_choice();
    cout << "Computer choses " << computers_choice << endl;

    switch (players_choice)
    {
      case 'r':
        if (computers_choice == 'r') cout << "Tie!" << endl;
        else if (computers_choice == 'p') cout << "Computer won!" << endl;
        else  cout << "You won!" << endl;
        break;
      case 'p':
        if (computers_choice == 'p') cout << "Tie!" << endl;
        else if (computers_choice == 's') cout << "Computer won!" << endl;
        else  cout << "You won!" << endl;
        break;
      case 's':
        if (computers_choice == 's') cout << "Tie!" << endl;
        else if (computers_choice == 'r') cout << "Computer won!" << endl;
        else  cout << "You won!" << endl;
        break;
      default:
        cout << "Dude you're dumb or what?" << endl;
    }
    cout << "Another one? [0=fuck no, 1=hell yeah] ";
    cin >> go_on;
  }
}

char get_computers_choice()
{
  int rand_int = rand() % 3;
  cout << rand_int << endl;
  switch (rand_int){
    case 0: // rock
      return 'r';
      break;
    case 1: // paper
      return 'p';
      break;
    case 2: // scissors
      return 's';
      break;
    default:
      throw runtime_error("Computer couldn't get a valid entry.");
  }
}
