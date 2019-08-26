#pragma once
#include <SFML/Graphics.hpp>
#include "SoundGame.h"
#include "ButtonGame.h"
#include "WindowGame.h"
#include <vector>
using namespace sf;
class MenuGame
{
protected:
	Texture t_background;
	Sprite s_background;
	SoundGame soundBackground;
	
public:
	virtual void InitMenu()=0;
};

class MainMenu:public MenuGame
{
private:
	
public:
	ButtonGame *playButtonGame;
	ButtonGame *optionButtonGame;
	ButtonGame *highScoreButtonGame;

	void InitMenu();
	void DrawMenu(WindowGame *w);
};
class PauseMenu:public MenuGame
{
private:

public:
	void InitMenu();
};