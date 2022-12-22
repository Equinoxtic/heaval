#ifndef SHELL_H
#define SHELL_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: Shell
	Directory: src.common
*/

#include<string>

namespace heaval
{
	class Shell
	{
		public:
			// Public keywords go here...

			static std::string shellUserString;

			static std::string shellType;

			static std::string createShell(std::string usr, std::string shType);

			static void generateShell();

		private:
			// Private keywords go here...
	};
}

#endif // Shell.h
