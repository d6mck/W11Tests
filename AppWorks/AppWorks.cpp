// AppWorks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

_declspec(dllimport) bool Test();

int main()
{
    std::cout << "Hello World!\n";

    Test();

    system("pause");
}