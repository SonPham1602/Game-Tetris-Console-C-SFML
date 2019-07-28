#pragma once 
#include <iostream>
#include <vector>
#include "Square.h"
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;
enum class TypeTile
{
	HinhVuong,ThanhNgang,ChuLXui,ChuLNguoc,ChuS,ChuT
};
class Tile
{
private:
	TypeTile typeTile;
	int SumSquares;
	int a[4];
	Square squares[4];
	Texture texture;
public:
	Tile();
	Tile(TypeTile type);
	void MoveLeft();// move left 
	void MoveRight();// move right 
	void Fall();// fall 
	void Spin();// spin tile 
};
