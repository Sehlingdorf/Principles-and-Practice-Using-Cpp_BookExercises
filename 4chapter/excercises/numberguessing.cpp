#include <iostream>

int guess_the_number(int mini, int maxi);

int main()
{ 
  int the_number;
  the_number = guess_the_number(1, 100);
  std::cout << "The number is: " << the_number << std::endl;
  return 0;
}

int guess_the_number(int mini, int maxi)
{
  if (mini == maxi)
  { 
    return mini;
  }
  else 
  {
    std::cout << "It must be a number between " << mini << " and " << maxi << "!" << std::endl;
    std::cout << "Is the number less than  or equal to " << (maxi+mini)/2 << " ? [1=true, 0=false]";
    bool is_smaller;
    std::cin >> is_smaller;
    std::cout << std::endl;

    if (is_smaller) return guess_the_number(mini, (maxi+mini)/2);
    else return guess_the_number((maxi+mini)/2+1, maxi);
  } 
}
