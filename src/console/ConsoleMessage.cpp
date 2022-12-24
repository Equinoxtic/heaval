#include "ConsoleMessage.h"
#include "lib/Time.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"

/*
	Auto-Generated C++ file for header: ConsoleMessage.h (Created with CreateHeader.py)
	Name: ConsoleMessage.cpp
	Source: src.console
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string ConsoleMessage::createConsoleMessage(std::string message, bool showTime, bool advanced)
	{
		std::string fConsoleMessageString;

		if (!StringUtils::stringEmpty(message))
		{
			std::string timeString;

			std::string consoleHeader = "CONSOLE @ ";

			if (showTime) {
				if (!advanced) {
					timeString = consoleHeader + Time::getTime();
				} else {
					timeString = consoleHeader + StringUtils::surroundString(Time::getTimeAndDate(), "[", "]");
				}
			}

			fConsoleMessageString = StringUtils::surroundString(timeString, "[", "]") + " > " + StringUtils::quoteString(message);
		}

		return fConsoleMessageString;
	}

	void ConsoleMessage::displayConsoleMessage(std::string msg)
	{
		Stdio::put(ConsoleMessage::createConsoleMessage(msg));
	}
}