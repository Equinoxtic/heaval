#include "Stdio.h"

#include<iostream>

namespace heaval
{
	Stdio::Stdio() {}

	Stdio::~Stdio() {}
	
	void Stdio::put(const std::string &stringptr)
	{
		std::cout << stringptr;
	}

	void Stdio::get(std::string &stringptr)
	{
		std::getline(std::cin, stringptr);
	}
}