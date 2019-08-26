#include "GameController.h"
void GameController::CreateNewGame()
{
	windowGame.GetWindowGame()->setFramerateLimit(60);
	windowGame.SetUp("Tetris SONPHAM",GetSizeOfBackgroud());
	eventInputGame.SetWindow(&windowGame);
	while (windowGame.IsDone())
	{
	
		
		windowGame.BeginDraw();
		//eventInputGame.CheckEvent();
		if(eventInputGame.CheckEvent(mainMenu->playButtonGame->GetSpite())==true)
		{
			ChangeBackground(&windowGame,"C:\\Users\\Welcome\\Documents\\GitHub\\GameTetrisConsole\\GameTetrisSFML\\Asset\\Mockup\\background.jpg");
		}
		else
		{
			mainMenu->DrawMenu(&windowGame);
		}
		//handleController->handleInput();
		//windowGame.Draw(s_Backgroud);
		
		boardGame.DrawTile(&windowGame,1,1);
		windowGame.EndDraw();
	}


}
void GameController::StartNewGame()
{
	cout<<"Start Game";
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
void GameController::ChangeBackground(WindowGame *w,string Path)
{
	t_Backgroud.loadFromFile(Path);
	s_Backgroud.setTexture(t_Backgroud);
	w->Draw(s_Backgroud);
}
