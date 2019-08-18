#pragma once
#include <iostream>
#include "Tile.h"
#include <vector>
#include <SFML/Graphics.hpp>
#include "WindowGame.h"
#include "EventInput.h"
using namespace std;
//
class Command
{
public:
	virtual void executeAction(Tile &tile) = 0;
};
// Action in game
class SpinBlocks:public Command
{
public:
	  void executeAction(Tile &tile)
	  {
		  tile.Spin();
	  }

};
class LeftBlocks:public Command
{
public:
	void executeAction(Tile &tile)
	{
		tile.MoveLeft();
	}
};
class RightBlocks:public Command
{
public:
	 void executeAction(Tile &tile)
	{
		tile.MoveRight();
	}
};
class FallDownBlock:public Command
{
public:
	  void executeAction(Tile &tile)
	 {
		 tile.Fall();
	 }
};


class InputHandler
{
private:
	Tile *c;
	sf::Event *e;
	Command *buttonRightAction;
	Command *buttonLeftAction;
	Command *buttonFallAction;
	Command *buttonSpinAction;
public:
	InputHandler()
	{	
		buttonSpinAction = new SpinBlocks();
		buttonLeftAction = new LeftBlocks();
		buttonRightAction = new RightBlocks();
		buttonFallAction = new FallDownBlock();
	}
	Command * handleInput()
	{
		
		switch (e->key.code)
		{
		case sf::Keyboard::A:
			{
				//std::cout<<"Press A/n";
				return buttonRightAction;
			}
		case  sf::Keyboard::D:
			{
				//std::cout<<"Press D/n";
				return buttonRightAction;
			}
		case sf::Keyboard::S:
			{
				//std::cout<<"Press S/n";
				return buttonFallAction;
			}
		case  sf::Keyboard::W:
			{
				//std::cout<<"Press W/n";
				return buttonSpinAction;
			}
		default:
			break;
		}
	};

};