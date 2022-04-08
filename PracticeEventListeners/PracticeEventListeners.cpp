// PracticeEventListeners.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//===========================================================================
//using dynamic_cast to determine the event type at run time because of Run-time Type Information (RTTI)
//===========================================================================
class Event
{
protected:
	virtual ~event() {};
};
 //new event handler using the dynamic_cast
void onEvent(Event* event)
{
	if (Collision* collision = dynamic_cast<Collision*>(event))
	{
		onCollision(collision);
	}
	else if (Explosion* explosion = dynamic_cast<Explosion*>(event))
	{
		onExplosion(explosion);
	}
	//etc....
}
//===========================================================================
//we can even use a template to make it more flexible
//===========================================================================
template <class T>
bool TryHandleEvent(const Event* event)
{
	if (const T* evnet = dynamic_cast<const T*> (event))
	{
		Return HandleEvent(event);
	}
	return false;
}

void OnEvent(const Event* event)
{
	if (TryHandleEvent<Collision>(event)) return;
	else if (TryHandleEvent<Explosion>(event)) return;
}
//===========================================================================
//event could be an enum or struct that houses the different event types
//===========================================================================
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
