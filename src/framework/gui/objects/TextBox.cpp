#include "TextBox.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"

/*
	Auto-Generated C++ file for header: TextBox.h (Created with CreateHeader.py)
	Name: TextBox.cpp
	Source: src.framework.gui.objects
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string TextBox::setTextBoxContent(std::string textContent)
	{
		std::string fTextString;
		
		std::string border = "o" + StringUtils::repeatString("=", textContent.length() + 2) + "o";
		
		if (!StringUtils::stringEmpty(textContent))
		{
			fTextString = border + "\n[ " + textContent + " ]\n" + border;
		}

		return fTextString;
	}

	void TextBox::pushTextBox(TextBox &textBoxObject)
	{
		Stdio::put(textBoxObject.content);
	}
}
