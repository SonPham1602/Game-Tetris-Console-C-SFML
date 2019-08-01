#include "GameController.h"
void GameController::CreateNewGame()
{
	windowGame.GetWindowGame()->setFramerateLimit(60);
	windowGame.SetUp("Tetris SONPHAM",GetSizeOfBackgroud());


}
void GameController::InitBackground()
{
	t_Backgroud.loadFromFile("C:\\Users\\Welcome\\Documents\\GitHub\\GameTetrisConsole\\GameTetrisSFML\\Asset\\Mockup\\background.jpg");
	s_Backgroud.setTexture(t_Backgroud);
}
Vector2u GameController::GetSizeOfBackgroud()
{
	return t_Backgroud.getSize();
}
