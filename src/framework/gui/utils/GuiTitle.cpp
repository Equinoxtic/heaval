#include "GuiTitle.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"

/*
	Auto-Generated C++ file for header: GuiTitle.h (Created with CreateHeader.py)
	Name: GuiTitle.cpp
	Source: src.framework.gui.utils
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string GuiTitle::setTitleContent(std::string mainTitleString, std::string pathString, std::string subPathString, bool bordered)
	{
		std::string fTitleString;

		std::string defTitleString;

		if (!StringUtils::stringEmpty(mainTitleString))
		{
			if (!StringUtils::stringEmpty(pathString))
			{
				if (StringUtils::stringEmpty(subPathString))
				{
					fTitleString = mainTitleString + " / " + pathString;
				}
				else
				{
					fTitleString = mainTitleString + " / " + pathString + " / " + subPathString;
				}
			}
			else
			{
				fTitleString = mainTitleString;
			}

			if (bordered)
			{
				defTitleString = StringUtils::surroundString(fTitleString, "[", "]");
			}
		}

		return defTitleString;
	}

	std::string GuiTitle::getTitleString(GuiTitle *titleObject)
	{
		return titleObject->titleString;
	}

	std::string GuiTitle::getTitlePath(GuiTitle *titleObject, bool isSub)
	{
		std::string t;
		if (!isSub) t = titleObject->titlePath; else t = titleObject->titleSubPath;
		return t;
	}

	std::string GuiTitle::getTitleName(GuiTitle *titleObject)
	{
		return titleObject->name;
	}

	void GuiTitle::outTitleName(GuiTitle *titleObject)
	{
		Stdio::put(titleObject->name);
	}

	void GuiTitle::addTitle(GuiTitle *titleObject)
	{
		Stdio::put(titleObject->titleContent);
	}
}
