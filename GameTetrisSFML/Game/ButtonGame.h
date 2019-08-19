#pragma  once 
#include <SFML/Graphics.hpp>
using namespace sf;

class ButtonGame
{
private:
	Texture t_ButtonGame;
	Sprite s_ButtonGame;
public:
	void ClickButton();
	void Animation();
	void SetPosition();
};
