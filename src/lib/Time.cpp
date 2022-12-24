#include "Time.h"

/*
	Auto-Generated C++ file for header: Time.h (Created with CreateHeader.py)
	Name: Time.cpp
	Source: src.lib
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string Time::getTime()
	{
		return std::string(__TIME__);
	}

	std::string Time::getDate()
	{
		return std::string(__DATE__);
	}

	std::string Time::getTimeAndDate()
	{
		return std::string(__TIME__) + " - " + std::string(__DATE__);
	}
}