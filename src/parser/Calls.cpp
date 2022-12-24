#include "Calls.h"
#include "CommandParser.h"
#include "framework/HeavalFramework.h"
#include "lib/StringUtils.h"
#include "lib/sys/System.h"

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

			if (StringUtils::strCompare(cmdInput, "exit")) {
				System::Exit(1);
			} else {
				HeavalFramework::ENTRY_POINT(false);
			}
		}
	}
}