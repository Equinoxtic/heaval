#include "Paths.h"
#include "lib/StringUtils.h"

/*
	Auto-Generated C++ file for header: Paths.h (Created with CreateHeader.py)
	Name: Paths.cpp
	Source: src.common
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string Paths::getFile(std::string file, std::string ext)
	{
		std::string fFileString;

		if (!StringUtils::stringEmpty(file))
		{
			if (!StringUtils::stringEmpty(ext))
			{
				fFileString = file + "." + ext;
			}
			else
			{
				fFileString = file + ".txt";
			}
		}

		return fFileString;
	}

	std::string Paths::getLogFile()
	{
		return Paths::getFile("logs/logfile");
	}
}