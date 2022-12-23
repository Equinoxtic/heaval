#include "Flag.h"
#include "lib/StringUtils.h"

/*
	Auto-Generated C++ file for header: Flag.h (Created with CreateHeader.py)
	Name: Flag.cpp
	Source: src.cmdutils
*/

namespace heaval
{
	/* Class definitions can go here. */

	bool Flag::checkFlag(std::string baseString, std::string targetString)
	{
		return StringUtils::findString(baseString, targetString);
	}

	std::string Flag::getFlag(std::string operand, std::string baseString, std::string targetString)
	{
		std::string fFlagString;

		if (!StringUtils::stringEmpty(baseString) && !StringUtils::stringEmpty(targetString))
		{
			if (StringUtils::findString(baseString, targetString))
			{
				fFlagString = operand + targetString;
			}
		}
		else
		{
			fFlagString = "--flag";
		}

		return fFlagString;
	}
}