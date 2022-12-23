#include "Command.h"

/*
	Auto-Generated C++ file for header: Command.h with CreateHeader.py
	Name: Command
	Directory: src.cmdutils
*/

#include "lib/StringUtils.h"

namespace heaval
{
	// Class definitions go here...

	std::string Command::DEFAULT_NAME = "COMMAND_NAME";

	std::string Command::DEFAULT_DESCRIPTION = "COMMAND_DESCRIPTION";

	std::string Command::createCommand(std::string name, std::string description)
	{
		std::string fCommandString;
		
		if (!StringUtils::stringEmpty(name) && !StringUtils::stringEmpty(description))
		{
			fCommandString = StringUtils::surroundString(name, "[", "]")
							+ " : " + StringUtils::quoteString(description);
		}
		else
		{
			fCommandString = StringUtils::surroundString(Command::DEFAULT_NAME, "[", "]")
							+ " : "+ StringUtils::quoteString(Command::DEFAULT_DESCRIPTION);
		}

		return "* " + fCommandString;
	}

	bool Command::checkCommand(std::string baseString, std::string commandString)
	{
		return (StringUtils::strCompare(baseString, commandString) ? true : false);
	}

	bool Command::checkCommandStartsWith(std::string baseString, std::string commandString)
	{
		return (StringUtils::startsWith(baseString, commandString) ? true : false);
	}
}
