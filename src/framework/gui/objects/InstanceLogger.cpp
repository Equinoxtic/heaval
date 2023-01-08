#include "InstanceLogger.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"
#include "console/ConsoleLogging.h"

/*
	Auto-Generated C++ file for header: InstanceLogger.h (Created with CreateHeader.py)
	Name: InstanceLogger.cpp
	Source: src.framework.gui.objects
*/

namespace heaval
{
	/* Class definitions can go here. */

	void InstanceLogger::logFromString(
			std::string logMessageString,
			std::string objectTypeString,
			std::string objectNameString)
	{
		std::string fLogString;

		std::string fObjectType;

		// std::string fObjectName;

		// Set object type.
		if (!StringUtils::stringEmpty(objectTypeString))
		{
			if (
						StringUtils::strCompare(objectTypeString, "Button")
					||	StringUtils::strCompare(objectTypeString, "TextBox")
					||	StringUtils::strCompare(objectTypeString, "DialogueBox")
			   )
			{
				fObjectType = objectTypeString;
			}
			else
			{
				fObjectType = "Button";
				Stdio::putLn("Unavailable type: " + objectTypeString);
			}
		}

		// Set and output fLogString.
		if (!StringUtils::stringEmpty(logMessageString))
		{
			fLogString = "Created " + fObjectType + " instance ~ " + logMessageString;
			ConsoleLogging::log(fLogString, "logs/logfile.txt");
			if (!StringUtils::stringEmpty(objectNameString))
			{
				ConsoleLogging::log(fObjectType + " name: " + objectNameString, "logs/logfile.txt");
			}
		}
	}
}
