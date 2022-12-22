#include "PlatformVariables.h"

/*
	Auto-Generated C++ file for header: PlatformVariables.h with CreateHeader.py
	Name: PlatformVariables
	Directory: src.lib.sys
*/

#include "Platform.h"

namespace heaval
{
	// Class definitions go here...
	
	bool PlatformVariables::IS_WINDOWS = (Platform::getPlatform() == "Windows");
	bool PlatformVariables::IS_UNIX = (Platform::getPlatform() == "Default");
	std::string PlatformVariables::CURRENT_PLATFORM = Platform::getPlatform();
}
