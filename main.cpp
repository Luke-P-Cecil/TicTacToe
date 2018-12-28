/*
   Luke P. Cecil
   Tic Tac Toe
   I started this game because i was annoyed of listening to my family at Christmas
*/

#include<iostream>
#include"Board.h"
#include"Tile.h"

using namespace std;  //Okay when not in header files right?

void greeting();
void play();
int selection();
int winner(Board, bool);

int main()
{
  Board board;
  int hold;
  bool player = false;
  int choice;

  greeting();

  do
  {
    board.drawBoard();
    cout << endl;
    
    choice = selection();
    if(board.placeable(choice) && choice != -1)
    {  
      board.updateBoard(choice, player);
      choice = winner(board, player);
      
      player = !player;
    }
  }while(choice != -1);          
  
  
  cin.ignore();
  return 0;
 }

int winner(Board board, bool player)
{
    if(board.checkForWinner())
       {

            board.drawBoard();

            if(player)
                cout << "\nX's win!\n\n";
            else
                cout << "\nO's win!\n\n";
        return -1;

       }
       return 999;
}

void greeting()
{
    cout << "Hello! Welcom to Tic Tac Toe. \nO's go first and once you make a move that play is over no going back"
    << ". I havent finished putting in a cat function yet sooooo once its over just end the program."
    << "\nThe spots start at the top left and go 0,1,2,3...8.\nEnter -1 when youre done\n\n";
    return;
}

int selection()
{
    int select = 999;
    do
    {
        cout << "\nEnter your selection must be >= 0 and < 9: ";
        cin >> select;
        cout << endl;
        if(select == -1)
                return -1;
    }while(select < 0 || select > 8);

    return select;
}
