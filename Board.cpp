/*
   Luke P. Cecil
   Tic Tac Toe
   Board driver file
   12-26-2018
*/


#include "Board.h"
#include "Tile.h"
#include <iostream>



// To hard code or to not hard code
void Board :: drawBoard()
{
 /*
   # | # | # 
  ---|---|---
   # | # | # 
  ---|---|---
   # | # | #
   
   this is what I want the board to look like
 */
 
  int tileCount = 0; //used to increment through tile vec
  for(int i = 0; i < 5; i++)
  {
    if( i == 0 || i % 2 == 0)
    {
      std::cout << " " << tiles[tileCount].getSymbol() << " " << "|";
      tileCount++;
      std::cout << " " << tiles[tileCount].getSymbol() << " " << "|";
      tileCount++;
      std::cout << " " << tiles[tileCount].getSymbol() << " " << std::endl;
      tileCount++;
    }
    else
    {
        std::cout << "---|---|---" << std::endl;
    }
  }
  
}

//This wait for it.... checks for a winner. Uses the three helper functions   
bool Board :: checkForWinner()
{
    for(int i = 0; i < 3; i++)
    {
        if(diagWinner(i) || verticalWinner(i) || horizontalWinner(i))
                return true;
    } 
    return false;
}

bool Board :: diagWinner(int i)
{
    //Check for Diagonals
    if(i == 0 || i == 2 && tiles[i].isX() && tiles[4].isX())
    {
        if(i == 0 && tiles[8].isX())
           return true;
         else if(i == 2 && tiles[6].isX()) 
           return true;   
    }  
         if(i == 0 || i == 2 && tiles[i].isO() && tiles[4].isO())
         {
            if(i == 0 && tiles[8].isO())
                    return true;
            else if(i == 2 && tiles[6].isO())
                    return true;
         }

         return false;
}

bool Board :: verticalWinner(int i)
{

        //Next two check for vertical win
         if(i == 0 || i ==1 || i == 2 && tiles[i].isX() && tiles[i+3].isX() && tiles[i+6].isX())
         {
            return true;
         }
         else if(i == 0 || i ==1 || i == 2 && tiles[i].isO() && tiles[i+3].isO() && tiles[i+6].isO())
         {
            return true;
         }
         return false;
}

bool Board :: horizontalWinner(int i)
{

        //These first two check for horizontal win
        if(i == 0 || i ==3 || i == 6 && tiles[i].isX() && tiles[i+1].isX() && tiles[i+2].isX())
        {
            return true;
        }
        else if(i == 0 || i == 3 || i == 6 && tiles[i].isO() && tiles[i+1].isO() && tiles[i+2].isO())
        {
            return true;
        }
        return false;
}

void Board :: updateBoard(int tileNum, bool user)    //True is to an X False to an O
{
    if(user)
        tiles[tileNum].setSymbol('X');
    else
        tiles[tileNum].setSymbol('O');
}
