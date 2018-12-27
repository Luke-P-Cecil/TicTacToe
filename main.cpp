#include<iostream>

using namespace std;  //Okay when not in header files right?

int main()
{
  
  for(int i = 0; i < 5; i++)
  {
    if( i == 0 || i % 2 == 0)
      std::cout << " # | # | # " << std::endl;
    else
      std::cout << "---|---|---" << std::endl;
  }
  
  
  cin.ignore();
  return 0;
 }
