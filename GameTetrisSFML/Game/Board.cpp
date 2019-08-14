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
		s[0].setTextureRect(sf::IntRect(0,0,1,1));
		s[0].setPosition(0,0);
		std::cout<<s[0].getTextureRect().width;


	}
	for(int i=0;i<4;i++)
	{
		w->Draw(s[0]);
	}
}
