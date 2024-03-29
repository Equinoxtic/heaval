#include "Error.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"

/*
	Auto-Generated C++ file for header: Error.h (Created with CreateHeader.py)
	Name: Error.cpp
	Source: src.framework.modules.handle
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string Error::DEFAULT_TYPE = "error";

	std::string Error::DEFAULT_MESSAGE = "ERROR_MESSAGE";

	std::string getBuildDoc()
	{
		return "https://github.com/Equinoxtic/heaval/blob/master/docs/Building.md";
	}

	std::string Error::typedError(std::string type, std::string msgkw)
	{
		std::string fErrorString;

		std::string errorHeader = StringUtils::surroundString("ERROR", "[", "]");

		bool isRuntime = false;

		if (!StringUtils::stringEmpty(type))
		{
			if (StringUtils::strCompare(type, "error")) {
				fErrorString = msgkw;
			} else if (StringUtils::strCompare(type, "runtime")) {
				isRuntime = true;
				fErrorString = msgkw + " has failed to run because of runtime errors."
							+ "\n> Read the documentation of " + msgkw + " on how it is built."
							+ "\n\n* [Building Documentation] (" + getBuildDoc() + ")";
			}
		}

		std::string fullError;

		if (!isRuntime)
		{
			fullError = errorHeader + ": " + StringUtils::quoteString(fErrorString);
		}
		else
		{
			fullError = StringUtils::surroundString(
						" RUNTIME ERROR ",
						StringUtils::repeatString("-", 2),
						StringUtils::repeatString("-", 2)
					) + "\n\n" + fErrorString;
		}

		return fullError;
	}

	std::string Error::createError(std::string message)
	{
		std::string errorHeader = StringUtils::surroundString("ERROR", "[", "]");

		std::string fErrorString;

		if (!StringUtils::stringEmpty(message))
		{
			fErrorString = errorHeader + ": " + StringUtils::quoteString(message);
		}

		return fErrorString;
	}

	void Error::outputTypedError()
	{
		Stdio::put(Error::typedError(Error::DEFAULT_TYPE, Error::DEFAULT_MESSAGE));
	}

	void Error::outputError()
	{
		Stdio::put(Error::createError(Error::DEFAULT_MESSAGE));
	}
}