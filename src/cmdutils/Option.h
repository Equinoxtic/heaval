#ifndef OPTION_H
#define OPTION_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Option.h
	Source: src.cmdutils
*/

#include<string>

namespace heaval
{
	class Option
	{
		public:
			/* Public variables / members go here. */
			
			static std::string createOption(std::string optionName, int optionNum);

			static void pushOptions(std::string* optionsList, int listSize);

		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Option.h
