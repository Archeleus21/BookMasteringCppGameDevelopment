// SampleLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

_declspec(dllexport) void HelloWorld()
{
    std::cout << "Hello World Dynamically!\n";
}

int main()
{
}
