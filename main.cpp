/*
   Luke P. Cecil
   Tic Tac Toe
   I started this game because i was annoyed of listening to my family at Christmas
*/

#include<iostream>
#include"Board.h"
#include"Tile.h"


using namespace std;  //Okay when not in header files right?

int main()
{
  Board board;

    cout << "\n";
    board.drawBoard();
    cout << endl << endl;
    board.updateBoard(0, true);
    board.drawBoard();

    if(board.checkForWinner())
            cout << "\n\nUh Oh :(";
                
  
  
  cin.ignore();
  return 0;
 }
