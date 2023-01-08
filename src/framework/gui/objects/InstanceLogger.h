#ifndef INSTANCELOGGER_H
#define INSTANCELOGGER_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: InstanceLogger.h
	Source: src.framework.gui.objects
*/

#include<string>

namespace heaval
{
	class InstanceLogger
	{
		public:
			/* Public variables / members go here. */

			static void logFromString(
					std::string logMessageString,
					std::string objectTypeString,
					std::string objectNameString);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // InstanceLogger.h
