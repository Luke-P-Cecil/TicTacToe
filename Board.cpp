#include "Board.h"
#include <iostream>


Board()
{
  for(int i = 0; i < 9; i++)
  {
    tile t;
    tile.push_back(t);
  }
}

// To hard code or to not hard code
void drawBoard()
{
 /*
   # | # | # 
  ---|---|---
   # | # | # 
  ---|---|---
   # | # | #
   
   this is what I want the board to look like
 */
 
  for(int i = 0; i < 5; i++)
  {
    if( i == 0 || i % 2 == 0)
      std::cout << " # | # | # " << std::endl;
    else
      std::cout << "---|---|---" << std::endl;
  }
  
  }
  
  bool checkForWinner()
  {
  
  }
}
