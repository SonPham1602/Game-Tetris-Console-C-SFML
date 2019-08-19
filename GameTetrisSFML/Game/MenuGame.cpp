#include "MenuGame.h"

void MainMenu::InitMenu()
{
	t_background.loadFromFile("C:\\Users\\Welcome\\Documents\\GitHub\\GameTetrisConsole\\GameTetrisSFML\\Asset\\Mockup\\Tetris.png");
	s_background.setTexture(t_background);
	// Add Button Game
	string pathPlayButtonGame = "C:\\Users\\Welcome\\Documents\\GitHub\\GameTetrisConsole\\GameTetrisSFML\\Asset\\Mockup\\buttonPlay.png";
	string pathOptionButtonGame =  "C:\\Users\\Welcome\\Documents\\GitHub\\GameTetrisConsole\\GameTetrisSFML\\Asset\\Mockup\\buttonOption.png";
	string pathHighScoreButtonGame =  "C:\\Users\\Welcome\\Documents\\GitHub\\GameTetrisConsole\\GameTetrisSFML\\Asset\\Mockup\\buttonHighScore.png";
	playButtonGame = new ButtonGame(pathPlayButtonGame,Vector2f(185,530));
	optionButtonGame = new ButtonGame(pathOptionButtonGame,Vector2f(404,785));
	highScoreButtonGame = new ButtonGame(pathHighScoreButtonGame,Vector2f(43,785));
}
void MainMenu::DrawMenu(WindowGame *w)
{
	w->Draw(s_background);
	w->Draw(playButtonGame->GetSpite());
	w->Draw(optionButtonGame->GetSpite());
	w->Draw(highScoreButtonGame->GetSpite());

}