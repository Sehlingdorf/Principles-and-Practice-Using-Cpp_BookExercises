#pragma once

#include<vector>

using namespace std;

template<typename T>
void printVector(T vec) 
{
  for(auto x : vec)
    cout << x << " ";
  cout << "\n";
}

template<typename T>
void test(T& a)
{
  a*=2;
}

template<typename T>
void add(T& a, const T& b)
{
  a+=b;
}

auto print = [](const int& n) { cout << n << " "; };

auto print2 = [](const int& n, const int& m) { cout << n << " " << m << endl; };
