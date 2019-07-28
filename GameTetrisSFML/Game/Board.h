#pragma  once
#include <iostream>
#include "Tile.h"

class Board
{
private:
	int SumRow;
	int SumColumn;
	int BoardTiles [20][15];
public:
	Board();
	void ClearROw();
};