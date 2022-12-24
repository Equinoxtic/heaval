#ifndef CONSOLEMESSAGE_H
#define CONSOLEMESSAGE_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: ConsoleMessage.h
	Source: src.console
*/

#include<string>

namespace heaval
{
	class ConsoleMessage
	{
		public:
			/* Public variables / members go here. */

			static std::string createConsoleMessage(std::string message, bool showTime = true, bool advanced = false);
			
			static void displayConsoleMessage(std::string msg);

		private:
			/* Private variables / members go here. */
			
	};
}

#endif // ConsoleMessage.h