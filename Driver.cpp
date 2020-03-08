#include <string.h>
#include <iostream>

#include "StringFactory.hpp"
using namespace std;

int main()
{
    char s[] = "428 + 12 - 67 / 862 - 5 + 42 / 65";
    char* delims = " ";
    

    LinkedList* ll = new LinkedList();

    StringFactory::split(ll, s, delims);
  
    ll->display();
  
}