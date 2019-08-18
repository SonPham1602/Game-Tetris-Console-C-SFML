#pragma  once
#include <iostream>
#include "Tile.h"
#include <vector>
#include <SFML/Graphics.hpp>
#include "WindowGame.h"
using namespace std;

class Board
{
private:
	int SumRow;//y
	int SumColumn;//x
	int BoardTiles [20][15];
	std::vector<Tile> ArrayOfTile;
public:
	Board();
	void ClearROw();
	void DrawTile(WindowGame *w,int x, int y);
	void DrawBlocks(WindowGame *w,vector<Tile> arrayTile);
};