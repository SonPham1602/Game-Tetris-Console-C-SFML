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
	vector<Square> squares;
	Texture texture;
public:
	Tile();
	Tile(TypeTile type);
};