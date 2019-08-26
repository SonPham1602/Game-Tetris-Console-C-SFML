#pragma once 
#include <iostream>
#include <vector>
#include "Board.h"
#include "WindowGame.h"
#include "InputHandler.h"
#include "EventInput.h"
#include "MenuGame.h"
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
	MainMenu *mainMenu;
	EventInputGame eventInputGame;
	InputHandler *handleController;
	Board boardGame;
	Texture t_Backgroud;
	Sprite s_Backgroud;
	WindowGame windowGame;
	int score;
	int stateGame;
public:
	
	void initBoardGame();
	GameController();
	~GameController();
	void ChangeBackground(WindowGame *w,string Path);
	void StartNewGame();
	void CreateNewGame();
	void PauseGame();
	void SaveGame();
	void InitBackground();
	Vector2u GetSizeOfBackgroud();
};