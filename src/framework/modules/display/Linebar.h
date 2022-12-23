#ifndef LINEBAR_H
#define LINEBAR_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Linebar.h
	Source: src.framework.modules.display
*/

#include<string>

namespace heaval
{
	class Linebar
	{
		public:
			/* Public variables / members go here. */

			static std::string LINESTRING;

			static int LINELENGTH;

			static std::string createLinebar(std::string linebarString, int length);

			static void displayLinebar();
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Linebar.h