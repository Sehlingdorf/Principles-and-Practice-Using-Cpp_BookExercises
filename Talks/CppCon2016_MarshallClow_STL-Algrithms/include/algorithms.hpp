#pragma once

//Excecutes function f on each pair between iterators
//Does nothing for zero or one element   
template <typename FwIter, typename Func>
void adjacent_pair(FwIter first, FwIter last, Func f)
{
  if (first != last)
  {
    FwIter trailer = first;
    ++first;
    for(; first != last; ++first, ++trailer)
      f(*trailer, *first);
  }
}
