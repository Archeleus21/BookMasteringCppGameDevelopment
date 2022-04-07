// SimpleExampleOfAGameLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//crude simple example
	double lastTime = getSystemTime(); //store the time before the first run of loop
	bool GameOver = false; //end loop 

	while (!GameOver)//end loop criteria
	{
		double currentTime = getSystemTime();  //get current time
		double deltaTime = currentTime - lastTime;  //gets amount of time that passed since last step of loop
		CheckInput(); //look for user input
		Update(deltaTime); //passes in deltatime to allow for modification to the game ie*what you see during the game
		Draw();  //draws a new screen/image to the display
		lastTime = currentTime; //updates lastTime inorder to keep time moving.
	}
}

