#ifndef CONSOLELOGGING_H
#define CONSOLELOGGING_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: ConsoleLogging.h
	Source: src.console
*/

#include<string>

namespace heaval
{
	class ConsoleLogging
	{
		public:
			/* Public variables / members go here. */

			static std::string DEFAULT_LOG_TYPE;

			static void log(std::string message, std::string logfile);
			
			static void typeLog(std::string message, std::string type, std::string logfile);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // ConsoleLogging.h