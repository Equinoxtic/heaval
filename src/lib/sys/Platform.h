#ifndef PLATFORM_H
#define PLATFORM_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: Platform
	Directory: src.lib.sys
*/

#include<string>

namespace heaval
{
	class Platform
	{
		public:
			// Public keywords go here...

			static std::string getPlatform();
			
			static bool checkPlatform(std::string currentPlatform);

		private:
			// Private keywords go here...
	};
}

#endif // Platform.h
