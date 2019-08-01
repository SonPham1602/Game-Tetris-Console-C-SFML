#pragma once 
#include <iostream>
#include <vector>
#include "Board.h"
#include "WindowGame.h"
using namespace std;
#include <SFML/Graphics.hpp>
enum  class StateGame
{
	Pause,
	Over,
	InProcess
};
class GameController
{
private:
	Texture t_Backgroud;
	Sprite s_Backgroud;
	WindowGame windowGame;
	int score;
	int stateGame;
public:

	GameController();
	void CreateNewGame();
	void PauseGame();
	void SaveGame();
	void InitBackground();
	Vector2u GetSizeOfBackgroud();
};