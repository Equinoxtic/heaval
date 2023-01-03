#include "Option.h"
#include "lib/StringUtils.h"
#include "lib/Convert.h"
#include "io/Stdio.h"

/*
	Auto-Generated C++ file for header: Option.h (Created with CreateHeader.py)
	Name: Option.cpp
	Source: src.cmdutils
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string Option::createOption(std::string optionName, int optionNum)
	{
		std::string fOptionString;

		if (!StringUtils::stringEmpty(optionName))
		{
			fOptionString = StringUtils::surroundString(Convert::numToStr(optionNum), "(", ")") + " : " + StringUtils::quoteString(optionName);
		}

		return fOptionString;
	}

	void Option::pushOptions(std::string* optionsList, int listSize)
	{
		for (int i = 0; i < listSize; ++i)
		{
			Stdio::put(Option::createOption(optionsList[i] + "\n", i+1));
		}
	}
}
