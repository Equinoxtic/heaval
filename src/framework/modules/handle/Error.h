#ifndef ERROR_H
#define ERROR_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Error.h
	Source: src.framework.modules.handle
*/

#include<string>

namespace heaval
{
	class Error
	{
		public:
			/* Public variables / members go here. */

			static std::string DEFAULT_TYPE;

			static std::string DEFAULT_MESSAGE;

			static std::string typedError(std::string type, std::string msgkw);

			static std::string createError(std::string message);

			static void outputTypedError();

			static void outputError();
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Error.h