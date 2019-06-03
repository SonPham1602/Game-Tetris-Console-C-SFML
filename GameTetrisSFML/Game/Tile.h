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
	int SumSquares;
	int a[4];
	Square squares[4];
	Texture texture;
public:
	Tile();
	Tile(TypeTile type);
	void MoveLeft();
	void MoveRight();
	void Fall();
	void Spin();
};