#include <iostream>
#include <vector>
#include <algorithm>

#include "vecfuncs.hpp"

int main ()
{

  std::vector<double> vec = readVecFromInput();
  print_vector(vec);

  std::sort(vec.begin(), vec.end());
  print_vector(vec);

  std::cout << "The median is " << median(vec) << std::endl;
  std::cout << "The smallest " << vec[0] << std::endl;
  std::cout << "The largest " << vec[vec.size()-1] << std::endl;

  return 0;
}


