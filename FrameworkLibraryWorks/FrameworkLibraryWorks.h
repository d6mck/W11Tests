#pragma once

#include <iostream>

using namespace System;

namespace FrameworkLibraryWorks
{
	public ref class Class1
	{
		// TODO: Add your methods for this class here.
	};

}

_declspec(dllexport) bool Test()
{
	std::cout << "Test Works!\n";

	return false;
}
