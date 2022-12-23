#include "FrameworkHooks.h"
#include "lib/sys/System.h"
#include "framework/modules/display/Title.h"
#include "framework/modules/display/Linebar.h"
#include "io/Stdio.h"
#include "lib/StringUtils.h"

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

	void FrameworkHooks::IntializeHooks(bool doClearScreen, bool showTitle, bool titleNewline, bool showOptions)
	{
		if (doClearScreen)
		{
			System::Clear();
		}

		if (showTitle)
		{
			FrameworkHooks::GenerateTitle();
			if (titleNewline) {
				Stdio::put(StringUtils::repeatString("\n", 2));
			}
			Linebar::displayLinebar();
		}

		/* if (showOptions)
		{
			FrameworkHooks::GenerateOptions();
		}

		FrameworkHooks::GenerateShellPrompt(); */
	}
}
