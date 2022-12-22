#ifndef COMMAND_H
#define COMMAND_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: Command
	Directory: src.cmdutils
*/

#include<string>

namespace heaval
{
	class Command
	{
		public:
			// Public keywords go here...

			static std::string DEFAULT_NAME;

			static std::string DEFAULT_DESCRIPTION;

			static std::string createCommand(std::string name, std::string description);

			static bool checkCommand(std::string baseString, std::string commandString);

			static bool checkCommandStartsWith(std::string baseString, std::string commandString);
			
		private:
			// Private keywords go here...
	};
}

#endif // Command.h
