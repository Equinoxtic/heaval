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

	const int CommandParser::COMMAND_LIST_SIZE = 3;

	std::string commandList[CommandParser::COMMAND_LIST_SIZE] = {
		"help",
		"clear",
		"exit"
	};

	std::string commandDescriptions[CommandParser::COMMAND_LIST_SIZE] = {
		"help",
		"clear screen",
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
		CommandHandler::pushCommands(commandList, commandDescriptions, CommandParser::COMMAND_LIST_SIZE);
	}

	void CommandParser::parseHandler(std::string input)
	{
		if (!StringUtils::stringEmpty(input))
		{
			CommandHandler::parseCommand(commandList, input, CommandParser::COMMAND_LIST_SIZE);
		}
	}
}