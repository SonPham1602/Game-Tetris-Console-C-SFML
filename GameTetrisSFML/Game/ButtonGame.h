#pragma  once 
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
enum class StateButton
{
	VISIBLE,
	HIDDEN
};
class ButtonGame
{
private:
	Texture t_ButtonGame;
	Sprite s_ButtonGame;
	StateButton stateButtonGame;
public:
	ButtonGame();
	ButtonGame(string path,Vector2f pos);
	ButtonGame(string path,Vector2i size,Vector2f pos,StateButton state);
//	void (GameController::*Click)();
	void Animation();
	void SetPosition();
	Sprite GetSpite();
};
