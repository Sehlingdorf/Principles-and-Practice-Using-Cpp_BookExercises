#include <iostream>
#include "vecfuncs.hpp"

double median(std::vector<double> vec)
{
  if (vec.size()%2 == 1) return vec[vec.size()/2];
  else return (vec[vec.size()/2] + vec[vec.size()/2-1])/2;;
}

std::vector<double> readVecFromInput()
{
  std::vector<double> vec;
  std::cout << "Type in doubles: ";
  for (double temp; std::cin >> temp; ) vec.push_back(temp);
  vec = {2,3,4,5};
  return vec;
}

void print_vector(std::vector<double> vec)
{
  for (unsigned int i=0; i<vec.size(); i++) std::cout << vec[i] << " ";
  std::cout << std::endl;
}
