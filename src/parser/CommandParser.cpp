#include "CommandParser.h"
#include "lib/StringUtils.h"
#include "cmdutils/CommandHandler.h"
#include "io/Stdio.h"

/*
	Auto-Generated C++ file for header: CommandParser.h (Created with CreateHeader.py)
	Name: CommandParser.cpp
	Source: src.parser
*/

namespace heaval
{
	/* Class definitions can go here. */

	const int CommandParser::COMMAND_LIST_SIZE = 4;

	std::string commandList[] = {
		"help",
		"clear",
		"git",
		"exit"
	};

	std::string commandDescriptions[] = {
		"help",
		"clear screen",
		"get repository info",
		"out"
	};

	void CommandParser::getCommandList(bool showListHeader)
	{
		if (showListHeader) {
			Stdio::put("\n" +
				StringUtils::surroundString(
					" COMMAND LIST ", 
					StringUtils::repeatString("-", 15) + "<",
					">" + StringUtils::repeatString("-", 15)) 
					+ StringUtils::repeatString("\n", 2)
			);
		}
		CommandHandler::pushCommands(commandList, commandDescriptions, std::size(commandList));
	}

	void CommandParser::parseHandler(std::string input)
	{
		if (!StringUtils::stringEmpty(input))
		{
			CommandHandler::parseCommand(commandList, input, std::size(commandList));
		}
	}
}