#include "Warning.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"

/*
	Auto-Generated C++ file for header: Warning.h (Created with CreateHeader.py)
	Name: Warning.cpp
	Source: src.framework.modules.handle
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string Warning::DEFAULT_MESSAGE = "WARNING_MESSAGE";

	std::string Warning::createWarning(std::string message)
	{
		std::string warningHeader = StringUtils::surroundString("WARNING", "[", "]");

		std::string fWarningString;

		if (!StringUtils::stringEmpty(message))
		{
			fWarningString = warningHeader + ": " + StringUtils::quoteString(message);
		}

		return fWarningString;
	}

	void Warning::outputWarning()
	{
		Stdio::put(Warning::createWarning(Warning::DEFAULT_MESSAGE));
	}
}