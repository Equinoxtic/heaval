#include "Button.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"
#include "console/ConsoleLogging.h"
#include "InstanceLogger.h"

/*
	Auto-Generated C++ file for header: Button.h (Created with CreateHeader.py)
	Name: Button.cpp
	Source: src.framework.gui.objects
*/

namespace heaval
{
	/* Class definitions can go here. */
	
	std::string Button::setButtonContent(std::string buttonContent, bool spaced)
	{
		std::string fButton;

		if (!StringUtils::stringEmpty(buttonContent))
		{
			fButton = StringUtils::surroundString(buttonContent
			,		(!spaced) ? "[" : "[ "
			,		(!spaced) ? "]" : " ]"
			);
		}

		return fButton;
	}

	std::string Button::getButtonName(Button &buttonObject)
	{
		return buttonObject.name;
	}

	void Button::outButtonName(Button &buttonObject)
	{
		Stdio::put(buttonObject.name);
	}

	void Button::pushButton(Button &buttonObject)
	{
		InstanceLogger::logFromString("New button, lovin\' it. <3", "Button", buttonObject.name);
		Stdio::put(buttonObject.content);
	}
}
