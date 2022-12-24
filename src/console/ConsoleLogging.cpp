#include "ConsoleLogging.h"
#include "ConsoleMessage.h"
#include "lib/StringUtils.h"
#include "lib/File.h"
#include "lib/Time.h"

/*
	Auto-Generated C++ file for header: ConsoleLogging.h (Created with CreateHeader.py)
	Name: ConsoleLogging.cpp
	Source: src.console
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string ConsoleLogging::DEFAULT_LOG_TYPE = "default";

	void ConsoleLogging::log(std::string message, std::string logfile)
	{
		if (File::fileExists(logfile))
		{
			if (!StringUtils::stringEmpty(message))
			{
				File::writeFile(logfile, ConsoleMessage::createConsoleMessage(message));
			}
			else
			{
				File::writeFile(logfile, ConsoleMessage::createConsoleMessage("LOG_TEXT"));
			}
		}
		else
		{
			ConsoleMessage::displayConsoleMessage("Logfile does not exist.");
		}
	}

	void ConsoleLogging::typeLog(std::string message, std::string type, std::string logfile)
	{
		std::string fLogString;

		std::string logHeader;
		
		if (File::fileExists(logfile))
		{
			if (!StringUtils::stringEmpty(message) && !StringUtils::stringEmpty(type))
			{
				if (StringUtils::strCompare(type, "default")) {
					ConsoleLogging::log(message, logfile);
				} else if (StringUtils::strCompare(type, "warning")) {
					logHeader = "warning";
				} else if (StringUtils::strCompare(type, "error")) {
					logHeader = "error";
				}

				if (!StringUtils::strCompare(type, "default")) {
					fLogString = StringUtils::surroundString(StringUtils::upperString(logHeader), "[", "]") + " @ " + StringUtils::surroundString(Time::getTime(), "(", ")") +  " > ";
				}
			}
		}
		else
		{
			ConsoleMessage::displayConsoleMessage("Logfile does not exist.");
		}
	}
}