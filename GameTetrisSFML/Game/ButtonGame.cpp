#include "ButtonGame.h"
ButtonGame::ButtonGame(string path,Vector2i size,Vector2f pos,StateButton state)
{
	t_ButtonGame.loadFromFile(path);
	s_ButtonGame.setTexture(t_ButtonGame);
	s_ButtonGame.setPosition(pos);
	stateButtonGame=state;
}
ButtonGame::ButtonGame(string path,Vector2f pos)
{
	t_ButtonGame.loadFromFile(path);
	s_ButtonGame.setTexture(t_ButtonGame);
	s_ButtonGame.setPosition(pos);
}
Sprite ButtonGame::GetSpite()
{
	return s_ButtonGame;
}