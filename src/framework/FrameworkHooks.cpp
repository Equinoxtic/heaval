#include "FrameworkHooks.h"
#include "lib/sys/System.h"
#include "framework/modules/display/Title.h"

/*
	Auto-Generated C++ file for header: FrameworkHooks.h with CreateHeader.py
	Name: FrameworkHooks
	Directory: src.framework
*/

namespace heaval
{
	// Class definitions go here...

	void FrameworkHooks::GenerateTitle()
	{
		Title::displayTitle();
	}

	void FrameworkHooks::IntializeHooks(bool doClearScreen, bool showTitle, bool showOptions)
	{
		if (doClearScreen)
		{
			System::Clear();
		}

		if (showTitle)
		{
			FrameworkHooks::GenerateTitle();
		}

		/* if (showOptions)
		{
			FrameworkHooks::GenerateOptions();
		}

		FrameworkHooks::GenerateShellPrompt(); */
	}
}
