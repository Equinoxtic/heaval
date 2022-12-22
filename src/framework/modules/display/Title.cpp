#include "Title.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"
#include "framework/info/Version.h"

/*
	Auto-Generated C++ file for header: Title.h with CreateHeader.py
	Name: Title
	Directory: src.framework.modules.display
*/

namespace heaval
{
	// Class definitions go here...

	std::string Title::DEFAULT_TITLE_STRING = "Heaval Framework [Console]";

	std::string Title::createTitle(std::string titleString, std::string versionString, bool showVersion)
	{
		std::string fTitleString;

		if (!StringUtils::stringEmpty(titleString) && !StringUtils::stringEmpty(versionString))
		{
			if (showVersion) {
				fTitleString = titleString + " - " + versionString;
			} else {
				fTitleString = titleString;
			}
		}
		else
		{
			fTitleString = Title::DEFAULT_TITLE_STRING + " - " + Version::getVersion();
		}
		
		return fTitleString;
	}

	void Title::displayTitle()
	{
		Stdio::put(
			Title::createTitle(
				Title::DEFAULT_TITLE_STRING,
				Version::getVersion(),
				true
			)
		);
	}
}
