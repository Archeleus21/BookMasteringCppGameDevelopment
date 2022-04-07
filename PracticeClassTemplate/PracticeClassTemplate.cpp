// PracticeClassTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//=========================================================================
//Class Template
//=========================================================================
template <class T>
class Rectangle
{
private:
	T m_topLeft;
	T m_topRight;
	T m_bottomLeft;
	T m_bottomRight;
public:
	Rectangle(T topLeft, T topRight, T bottomLeft, T bottomRight) :
		m_topLeft(topLeft),
		m_topRight(topRight),
		m_bottomLeft(bottomLeft),
		m_bottomRight(bottomRight) {}
	T GetWidth() { return m_topRight - m_topLeft; }
	T GetHeight() { return m_bottomLeft - m_topLeft; }
};
//=========================================================================
//Function Template
//=========================================================================
template <class T>
void Swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
//=========================================================================
//Variable Template
//=========================================================================
template <class T>
constexpr T pi = 3.01415926535897932385;

//example using template above
template <typename T>
T area_of_circle_with_radius(T r)
{
	return pi * r * r;
}

//=========================================================================
//Template using the datatype "auto"
//=========================================================================
//Old way
template <typename ObjectType, typename ObjectFactory>
void createObject(const ObjectFactory &objFactory)
{
	ObjectType obj = objFactory.makeObject();
	//do stuff
}
//new way
template <typename ObjectFactory>
void CreateObject(const ObjectFactory &objFactory)
{
	auto obj = objFactory.MakeObject();
	//do stuff
}



int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
