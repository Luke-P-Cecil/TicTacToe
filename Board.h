#pragma once

#include "Tile.h"
#include<iostream>
#include<vector>

//Basically the entire game
class Board
{
  private: 
    std::vector<Tile>tiles;
    int boardSize = 3;
    //Three helper functions for finding a winner
    bool horizontalWinner(int);
    bool verticalWinner(int);
    bool diagWinner(int);
    
  public:
    
    Board()
    {
        for(int i = 0; i < 9; i++)
        {
             Tile t;
            tiles.push_back(t);
    
        }
    }
    
    void drawBoard();
    bool checkForWinner();
    bool checkForOpenSpace();
    void updateBoard(int, bool); //Int is the number for the tile to change the bool is to see if its to an X or O
    
    
    ~Board(){};
    

};
