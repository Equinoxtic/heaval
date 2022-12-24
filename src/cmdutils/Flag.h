#ifndef FLAG_H
#define FLAG_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Flag.h
	Source: src.cmdutils
*/

#include<string>

namespace heaval
{
	class Flag
	{
		public:
			/* Public variables / members go here. */

			static bool checkFlag(std::string baseString, std::string targetString);

			static std::string getFlag(std::string operand, std::string baseString, std::string targetString);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Flag.h