#include "Version.h"
#include "common/Resources.h"
#include "lib/StringUtils.h"

/*
	Auto-Generated C++ file for header: Version.h with CreateHeader.py
	Name: Version
	Directory: src.framework.info
*/

namespace heaval
{
	// Class definitions go here...

	std::string Version::getVersion()
	{
		return Resources::VERSION;
	}

	std::string Version::getBuildRelease()
	{
		return Resources::BUILD_RELEASE;
	}

	std::string Version::getVersionOf(std::string vType)
	{
		std::string fVersion;
		
		if (!StringUtils::stringEmpty(vType))
		{
			if (StringUtils::strCompare(vType, "main") || StringUtils::strCompare(vType, "version"))
			{
				fVersion = Resources::VERSION;
			}
			else if (StringUtils::strCompare(vType, "release") || StringUtils::strCompare(vType, "build"))
			{
				fVersion = Resources::BUILD_RELEASE;
			}
			else if (StringUtils::strCompare(vType, "client"))
			{
				fVersion = StringUtils::surroundString(Resources::TITLE, "-- ", " --")
						+ "\nVersion: " + Resources::VERSION 
						+ "\nBuild release: " + Resources::BUILD_RELEASE;
			}
			else
			{
				fVersion = Resources::VERSION;
			}
		}
		else
		{
			fVersion = "null";
		}

		return fVersion;
	}
}
