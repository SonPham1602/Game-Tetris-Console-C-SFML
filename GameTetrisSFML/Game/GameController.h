#pragma once 
#include <iostream>
#include <vector>
#include "Board.h"
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
	int score;
	int stateGame;
public:
	GameController();
	void PauseGame();
	void SaveGame();
};