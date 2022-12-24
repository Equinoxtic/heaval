#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: CommandHandler.h
	Source: src.cmdutils
*/

#include<string>

namespace heaval
{
	class CommandHandler
	{
		public:
			/* Public variables / members go here. */

			static void pushCommands(std::string* list, std::string* desc, int listSize);

			static void parseCommand(std::string* list, std::string input, int listSize);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // CommandHandler.h