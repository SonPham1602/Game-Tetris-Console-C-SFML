#include "Tile.h"
Tile::Tile(TypeTile type)
{
	typeTile = type;
	SumSquares = 4;//Khai bao so luong 
	Square s1,s2,s3,s4;
	squares[0] = s1;
	squares[1] = s2;
	squares[2] = s3;
	squares[3] = s4;
	switch (type)
	{
	case TypeTile::HinhVuong:
		squares[1].ChangeSquare(squares[0].GetColumn()+1,squares[0].GetRow());
		squares[2].ChangeSquare(squares[0].GetColumn()+1,squares[0].GetRow()+1);
		squares[3].ChangeSquare(squares[0].GetColumn(),squares[0].GetRow()+1);
		
		break;
	case TypeTile::ThanhNgang:
		squares[1].ChangeSquare(squares[0].GetColumn()+1,squares[0].GetRow());
		squares[2].ChangeSquare(squares[0].GetColumn()+2,squares[0].GetRow());
		squares[3].ChangeSquare(squares[0].GetColumn()+3,squares[0].GetRow());
		break;
	case TypeTile::ChuLXui:
		squares[1].ChangeSquare(squares[0].GetColumn()+1,squares[0].GetRow());
		squares[2].ChangeSquare(squares[0].GetColumn()+2,squares[0].GetRow());
		squares[3].ChangeSquare(squares[0].GetColumn()+2,squares[0].GetRow()+1);
		break;
	case TypeTile::ChuLNguoc:
		squares[1].ChangeSquare(squares[0].GetColumn()+1,squares[0].GetRow());
		squares[2].ChangeSquare(squares[0].GetColumn()+2,squares[0].GetRow());
		squares[3].ChangeSquare(squares[0].GetColumn()+2,squares[0].GetRow()-1);
		break;
	case TypeTile::ChuS:
		squares[1].ChangeSquare(squares[0].GetColumn()+1,squares[0].GetRow());
		squares[2].ChangeSquare(squares[0].GetColumn(),squares[0].GetRow()+1);
		squares[3].ChangeSquare(squares[0].GetColumn()-1,squares[0].GetRow()-1);
		break;
	case TypeTile::ChuT:
		squares[1].ChangeSquare(squares[0].GetColumn()+1,squares[0].GetRow()+1);
		squares[2].ChangeSquare(squares[0].GetColumn(),squares[0].GetRow()+1);
		squares[3].ChangeSquare(squares[0].GetColumn()-1,squares[0].GetRow()+1);
		break;
	default:
		break;
	}
}
void Tile::MoveLeft()
{
	for(int i=0;i<SumSquares;i++)
	{
		squares[i].ChangeColumn(squares[i].GetColumn()-1);
	}
}
void Tile::MoveRight()
{
	for(int i=0;i<SumSquares;i++)
	{
		squares[i].ChangeColumn(squares[i].GetColumn()+1);
	}
}
void Tile::Fall()
{
	for(int i=0;i<SumSquares;i++)
	{
		squares[i].ChangeRow(squares[i].GetRow()+1);
	}
}
void Tile::Spin()
{
	switch (typeTile)
	{
	case TypeTile::HinhVuong:

		break;
	case TypeTile::ThanhNgang:

		break;
	case TypeTile::ChuLXui:

		break;
	case TypeTile::ChuLNguoc:

		break;
	case TypeTile::ChuS:

		break;
	case TypeTile::ChuT:

		break;
	default:
		break;
	}
	
}