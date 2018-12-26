#pragma once

#include "Tile.h" //Need to make this
#include<iostream>
#include<vector>

//Basically the entire game
class Board
{
  private: 
    vector<Tile>tiles;
    int boardSize = 3;
    
  public:
    Board();
    
    void drawBoard();
    bool checkForWinner();
    bool checkForOpenSpace();
    void placeTiles(char);  //Char for selection of placement
    
    
    ~Board();
    

}
