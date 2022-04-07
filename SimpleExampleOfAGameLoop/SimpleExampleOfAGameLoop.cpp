// SimpleExampleOfAGameLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//crude simple example
	double lastTime = getSystemTime();
	bool GameOver = false;

	while (!GameOver)
	{
		double currentTime = getSystemTime();
		double deltaTime = currentTime - lastTime;
		CheckInput();
		Update(deltaTime);
		Draw();
		lastTime = currentTime;
	}
}

