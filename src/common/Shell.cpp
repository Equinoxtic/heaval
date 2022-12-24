#include "Shell.h"

/*
	Auto-Generated C++ file for header: Shell.h with CreateHeader.py
	Name: Shell
	Directory: src.common
*/

#include "lib/StringUtils.h"
#include "io/Stdio.h"

namespace heaval
{
	// Class definitions go here...

	std::string Shell::shellUserString = "usr/console";

	std::string Shell::shellType = "standard";

	std::string Shell::createShell(std::string usr, std::string shType)
	{
		std::string fShellString;
		
		if (!StringUtils::stringEmpty(usr) && !StringUtils::stringEmpty(shType))
		{
			std::string fShellUser;
			std::string fShellStringType;

			if (StringUtils::strCompare(shType, "standard")) {
				fShellUser = usr;
				fShellStringType = " >";
			} else if (StringUtils::strCompare(shType, "bash")) {
				fShellUser = StringUtils::surroundString(usr, "[", "]");
				fShellStringType = " ~ $";
			} else if (StringUtils::strCompare(shType, "advanced")) {
				fShellUser = StringUtils::surroundString(usr, "(", ")");
				fShellStringType = "\n>";
			}

			fShellString = fShellUser + fShellStringType;
		}

		return fShellString + " ";
	}

	void Shell::generateShell()
	{
		Stdio::put(Shell::createShell(Shell::shellUserString, Shell::shellType));
	}
}
