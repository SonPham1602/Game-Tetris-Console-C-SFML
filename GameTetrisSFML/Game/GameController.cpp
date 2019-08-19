#include "GameController.h"
void GameController::CreateNewGame()
{
	windowGame.GetWindowGame()->setFramerateLimit(60);
	windowGame.SetUp("Tetris SONPHAM",GetSizeOfBackgroud());
	while (windowGame.IsDone())
	{
		eventInputGame.SetWindow(&windowGame);
		eventInputGame.CheckEvent();
		windowGame.BeginDraw();
		//handleController->handleInput();
		//windowGame.Draw(s_Backgroud);
		mainMenu->DrawMenu(&windowGame);
		boardGame.DrawTile(&windowGame,1,1);
		windowGame.EndDraw();
	}


}
void GameController::InitBackground()
{
	t_Backgroud.loadFromFile("C:\\Users\\Welcome\\Documents\\GitHub\\GameTetrisConsole\\GameTetrisSFML\\Asset\\Mockup\\background.jpg");
	s_Backgroud.setTexture(t_Backgroud);
	mainMenu=new MainMenu();
	mainMenu->InitMenu();
	
}
Vector2u GameController::GetSizeOfBackgroud()
{
	return t_Backgroud.getSize();
}
GameController::GameController()
{
	InitBackground();
	handleController = new InputHandler();
}
void GameController::initBoardGame()
{
	boardGame.DrawTile(&windowGame,1,2);
}
GameController::~GameController()
{

}
