#include "Stdio.h"

#include<iostream>

namespace heaval
{
	void Stdio::put(std::string strContent)
	{
		std::cout << strContent;
	}

	void Stdio::putLn(std::string strContent)
	{
		Stdio::put(strContent + "\n");
	}

	void Stdio::get(std::string &strptr)
	{
		std::getline(std::cin, strptr);
	}
}