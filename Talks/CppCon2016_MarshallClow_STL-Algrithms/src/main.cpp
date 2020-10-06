#include<iostream>
#include<algorithm>

#include "../include/algorithms.hpp"
#include "../include/utilities.hpp"


using namespace std;

int main() {
  cout << "Hi, I am a little programm :)\n";

  vector<int> vec = {4,3,2,1}; printVector(vec);
  sort(vec.begin(), vec.end()); printVector(vec);

  //adjacent_pair(vec.begin(), vec.end(), print2);
  //for_each(vec.begin(), vec.end(), print);
  for_each(vec.begin(), vec.end(), test<int>); printVector(vec);
  adjacent_pair(vec.begin(), vec.end(), add<int>); printVector(vec);

  return 0;
}
