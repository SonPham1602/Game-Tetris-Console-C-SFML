#include "Board.h"

Board::Board()
{
	//Khoi tao mang ban dau bang 0
	

}
void Board::ClearROw()
{

}
void Board::DrawTile(WindowGame *w,int x, int y)
{
	Texture tex;
	tex.loadFromFile("C:\\Users\\Welcome\\Documents\\GitHub\\GameTetrisConsole\\GameTetrisSFML\\Asset\\1.png");
	Sprite s[4];
	s[0].setTexture(tex);
	s[1].setTexture(tex);
	s[2].setTexture(tex);
	s[3].setTexture(tex);
	for(int i=0;i<4;i++)
	{
		s[0].setPosition(0,0);
	}
	for(int i=0;i<4;i++)
	{
		w->Draw(s[0]);
	}
}
void Board::DrawBlocks(WindowGame *w,vector<Tile> arrayTile)
{
	if(!arrayTile.empty())
	{
		for(int i=0;i<ArrayOfTile.size();i++)
		{
			//w->Draw(arrayTile[i].)
		}
	}

}