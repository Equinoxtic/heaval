#ifndef WARNING_H
#define WARNING_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Warning.h
	Source: src.framework.modules.handle
*/

#include<string>

namespace heaval
{
	class Warning
	{
		public:
			/* Public variables / members go here. */

			static std::string DEFAULT_MESSAGE;

			static std::string createWarning(std::string message);

			static void outputWarning();
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Warning.h