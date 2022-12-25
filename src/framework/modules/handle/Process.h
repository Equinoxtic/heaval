#ifndef PROCESS_H
#define PROCESS_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Process.h
	Source: src.framework.modules.handle
*/

#include<string>

namespace heaval
{
	class Process
	{
		public:
			/* Public variables / members go here. */

			static std::string DEFAULT_PROCESS_TYPE;

			static std::string getTypedProcess(std::string type);

			static std::string getCancel();

			static std::string getUpdate();

			static std::string getRunning();

			static void outputProcess();
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Process.h