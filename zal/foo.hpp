#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <iterator>

#include <iostream>

std::vector< char > foo(std::list< Human >& people)
{
    std::list<Human>::iterator it;
    int n = people.size();
    std::vector<char> odpowiedz(people.size());
    std::vector<char>::reverse_iterator a = odpowiedz.rbegin();
    for (it = people.begin(); it != people.end(); it++)
    {
      it->birthday();
      if (it->isMonster() == true)
        *a = 'n';
      else
        *a = 'y';
      a++;
    }
    return {odpowiedz};
}
