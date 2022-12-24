#ifndef COMMANDPARSER_H
#define COMMANDPARSER_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: CommandParser.h
	Source: src.parser
*/

#include<string>

namespace heaval
{
	class CommandParser
	{
		public:
			/* Public variables / members go here. */

			static const int COMMAND_LIST_SIZE;

			static void getCommandList(bool showListHeader = false);

			static void parseHandler(std::string input);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // CommandParser.h