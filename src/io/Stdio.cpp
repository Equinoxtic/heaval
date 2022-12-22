#include "Stdio.h"
#include "StdUtils.h"

#include<iostream>

namespace heaval
{
	void Stdio::put(std::string strContent) { std::cout << strContent; }
	void Stdio::put(bool content) { std::cout << content; }
	void Stdio::put(int content) { std::cout << content; }
	void Stdio::put(float content) { std::cout << content; }

	void Stdio::putLn(std::string strContent) { Stdio::put(strContent); StdUtils::newline(); }
	void Stdio::putLn(bool content) { Stdio::put(content); StdUtils::newline(); }
	void Stdio::putLn(int content) { Stdio::put(content); StdUtils::newline(); }
	void Stdio::putLn(float content) { Stdio::put(content); StdUtils::newline(); }

	void Stdio::get(std::string &strptr)
	{
		std::getline(std::cin, strptr);
	}
}