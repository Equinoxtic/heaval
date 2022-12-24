#ifndef SYSTEM_H
#define SYSTEM_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: System
	Directory: src.lib.sys
*/

#include<string>

namespace heaval
{
	class System
	{
		public:
			// Public keywords go here...

			// Exit function.
			static void Exit(int exitStatus);

			// Pause function. (Usually provides a prompt before continuing)
			static void Pause(int exitStatus);

			// Clear the screen.
			static void Clear();

			static const char* getCommand(std::string __command__);

			// Execute a command w/ OS identification.
			static void Execute(std::string command);

			// Execute a standalone command without OS identification.
			static void ExecuteLone(std::string command);
			
		private:
			// Private keywords go here...
	};
}

#endif // System.h
