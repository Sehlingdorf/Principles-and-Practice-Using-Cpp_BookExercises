#include <iostream>
#include <vector>
#include <algorithm>

double median(std::vector<double> vec);

int main ()
{
  std::vector<double> vec = {1.0, 2.0, 3.0, 4.0};
  
  std::sort(vec.begin(), vec.end());
  std::cout << "The median is " << median(vec) << std::endl;

  return 0;
}


double median(std::vector<double> vec)
{
  if (vec.size()%2 == 1) return vec[vec.size()/2];
  else return (vec[vec.size()/2] + vec[vec.size()/2-1])/2;;
}
