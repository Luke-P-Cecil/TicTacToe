#pragma once

class Tile
{
  private:
    char symbol = '#'; 
  public:
    Tile();
    bool emptySpace() { return symbol == '#'; }
    bool isX() { return symbol == 'X'; }
    bool isO() { return symbol == 'O'; }
    void setSymbol(char c) { symbol = c; }
    char getSymbol() { return symbol; }
    
    ~Tile();

};
