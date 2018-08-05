#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
  long int current_square, grains_current_square=1, total_grains=0; 

  cout << "==Grain of Rice==" << endl;
  
  for(current_square=1; current_square<65; current_square++)
  {
    total_grains += grains_current_square;

    cout << "Square: " << current_square;
    cout << ". Grains on current square: " << grains_current_square;
    cout << ". Total grains: " << total_grains << endl;

    grains_current_square *= 2;
  } 
}
