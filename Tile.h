#pragma once

class Tile
{
  private:
    bool isEmpty = true;
    bool isX = false;
    bool isY = false;
    
  public:
    Tile();
    bool isEmpty() { return isEmpty; }
    bool isX() { return isX; }
    bool isY() { return isY; }
    
    ~Tile();

}
