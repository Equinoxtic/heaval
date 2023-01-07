#include "GuiGuide.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"

/*
	Auto-Generated C++ file for header: GuiGuide.h (Created with CreateHeader.py)
	Name: GuiGuide.cpp
	Source: src.framework.gui.utils
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string GuiGuide::createGuide(std::string guideString)
	{
		std::string fGuideString;

		if (!StringUtils::stringEmpty(guideString))
		{
			fGuideString = "[*]: " + StringUtils::quoteString(guideString);
		}

		return fGuideString;
	}

	void GuiGuide::outputGuideList(std::string* guideList, int lsize, bool forcedCreate)
	{
		Stdio::putLn("-- GUIDE --");
		for (int i = 0; i < lsize; ++i)
		{
			if (!forcedCreate)
			{
				Stdio::putLn(guideList[i]);
			}
			else
			{
				Stdio::putLn(GuiGuide::createGuide(guideList[i]));
			}

			if (i <= lsize) { break; }
		}
	}
}
