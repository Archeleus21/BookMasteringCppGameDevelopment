// ExampleOfStateMachine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


//simple enum to define our states
enum GameState
{
	Waiting,
	Playing,
	GameOver
};

GameState currentGameState = Waiting;  //current game state

//other Game Class Functions......
//.....
//.....

//Game Update Function
void Update(double deltaTime)
{
	//switch case that acts as out machine
	switch (currentGameState)
	{
		case Waiting:
			//do things while in waiting state
			//transition to the next state
			currentGameState = Playing;
			break;
		case Playing:
			//do things while playing
			CheckInput();
			UpdateObjects(deltaTime);
			Draw();
			//transition to the next state
			currentGameState = GameOver;
			break;
		case GameOver:
			//do things while in waiting state
			UploadHighScore();
			ResetGame();
			//transition to the next state
			currentGameState = Waiting;
			break;
	}
}

int main()
{
    std::cout << "Hello World!\n";
}
