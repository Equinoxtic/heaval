#include "CommandHandler.h"
#include "Command.h"
#include "io/Stdio.h"
#include "lib/StringUtils.h"
#include "parser/Calls.h"

/*
	Auto-Generated C++ file for header: CommandHandler.h (Created with CreateHeader.py)
	Name: CommandHandler.cpp
	Source: src.cmdutils
*/

namespace heaval
{
	/* Class definitions can go here. */

	void CommandHandler::pushCommands(std::string* list, std::string* desc, int listSize)
	{
		for (int i = 0; i < listSize; ++i)
		{
			Stdio::putLn(Command::createCommand(list[i], desc[i]));
		}
		Stdio::put("\n");
	}

	void CommandHandler::parseCommand(std::string* list, std::string input, int listSize)
	{
		bool doParse = false;

		for (int i = 0; i < listSize; ++i)
		{
			if (StringUtils::startsWith(input, list[i]))
			{
				doParse = true;
			}
		}

		if (doParse)
		{
			Calls::callCommand(input);
		}
	}
}