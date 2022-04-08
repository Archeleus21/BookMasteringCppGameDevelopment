// PracticeEventListeners.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//even could be an enum or struct that houses the different event types
void GameObject::HandleEvent(Event* event)
{
	switch (event)
	{
	case Collision:
		HandleCollision();
		//do other things
		break;
	case Explosion:
		HandeExplosion();
		//more things
		break;
	}
}


int main()
{
    
}
