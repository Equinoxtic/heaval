#include "Calls.h"
#include "CommandParser.h"
#include "framework/HeavalFramework.h"
#include "framework/info/Repository.h"
#include "lib/StringUtils.h"
#include "lib/sys/System.h"
#include "io/Stdio.h"
#include "io/StdUtils.h"

/*
	Auto-Generated C++ file for header: Calls.h (Created with CreateHeader.py)
	Name: Calls.cpp
	Source: src.parser
*/

namespace heaval
{
	/* Class definitions can go here. */

	void Calls::callCommand(std::string cmdInput)
	{
		if (!StringUtils::stringEmpty(cmdInput))
		{
			if (StringUtils::strCompare(cmdInput, "help")) {
				CommandParser::getCommandList(true);
			}

			if (StringUtils::strCompare(cmdInput, "clear")) {
				System::Clear();
			}

			if (StringUtils::startsWith(cmdInput, "git")) {
				StdUtils::newline();
				if (StringUtils::findString(cmdInput, "-rmp"))
				{
					Repository::outputReadme(true);
				}
				else if (StringUtils::findString(cmdInput, "-rm"))
				{
					Repository::outputReadme();
				}
				else if (StringUtils::findString(cmdInput, "-srcp"))
				{
					Repository::outputRepositorySource(true, true);
				}
				else if (StringUtils::findString(cmdInput, "-src"))
				{
					Repository::outputRepositorySource(true);
				}
				else
				{
					Repository::outputReadme();
				}
				StdUtils::newline();
			}

			if (StringUtils::strCompare(cmdInput, "exit") || StringUtils::strCompare(cmdInput, "quit") || StringUtils::strCompare(cmdInput, "q")) {
				System::Exit(1);
			} else {
				HeavalFramework::ENTRY_POINT(false);
			}
		}
	}
}
