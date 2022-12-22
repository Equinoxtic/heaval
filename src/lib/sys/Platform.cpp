#include "Platform.h"
#include "lib/StringUtils.h"

/*
	Auto-Generated C++ file for header: Platform.h with CreateHeader.py
	Name: Platform
	Directory: src.lib.sys
*/

namespace heaval
{
	// Class definitions go here...

	std::string Platform::getPlatform()
	{
		std::string currentPlatform;

		#ifdef _WIN32
			currentPlatform = "Windows";
		#else
			currentPlatform = "Default";
		#endif

		return currentPlatform;
	}

	bool Platform::checkPlatform(std::string currentPlatform)
	{
		bool isCurrentPlatform;

		if (StringUtils::stringEmpty(currentPlatform))
		{
			isCurrentPlatform = (StringUtils::strCompare(currentPlatform, Platform::getPlatform()));
		}
		else
		{
			isCurrentPlatform = false;
		}

		return isCurrentPlatform;
	}
}
