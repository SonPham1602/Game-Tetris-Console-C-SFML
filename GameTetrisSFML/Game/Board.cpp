#include "Board.h"

Board::Board()
{
	//Khoi tao mang ban dau bang 0
	for(int i=0;i<SumColumn;i++)
	{
		for(int j=0;j<SumRow;j++)
		{
			BoardTiles[i][j]=0;
		}
	}
}
void Board::ClearROw()
{

}
void Board::DrawTile(int x, int y)
{
	Texture tex;
	tex.loadFromFile("C:\\Users\Welcome\Documents\GitHub\GameTetrisConsole\GameTetrisSFML\Asset\1.png");
	Sprite s[4];
	s[0].setTexture(tex);
	s[1].setTexture(tex);
	s[2].setTexture(tex);
	s[3].setTexture(tex);
	for(int i=0;i<4;i++)
	{
		s[0].setPosition(113*3,113*5);

	}
}
