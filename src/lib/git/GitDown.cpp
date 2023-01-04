#include "GitDown.h"
#include "lib/StringUtils.h"

/*
	Auto-Generated C++ file for header: GitDown.h (Created with CreateHeader.py)
	Name: GitDown.cpp
	Source: src.lib.git
*/

namespace heaval
{
	/* Class definitions can go here. */
	
	std::string GitDown::header(std::string text, int heading)
	{
		std::string headerString;

		switch(heading)
		{
			case 1:
				headerString = "# " + text;
				break;
			case 2:
				headerString = "## " + text;
				break;
			case 3:
				headerString = text;
				break;
		}

		return headerString;
	}

	std::string GitDown::italic(std::string text)
	{
		return StringUtils::surroundString(text, "*", "*");
	}

	std::string GitDown::strong(std::string text)
	{
		return StringUtils::surroundString(text, "**", "**");
	}

	std::string GitDown::highlight(std::string text)
	{
		return StringUtils::surroundString(text, "[", "]");
	}

	std::string GitDown::list(std::string text, std::string listType)
	{
		std::string fListString;

		if (!StringUtils::stringEmpty(listType))
		{
			if (StringUtils::strCompare(listType, "bullet") || StringUtils::strCompare(listType, "*")) {
				fListString = "* " + text;
			} else if (StringUtils::strCompare(listType, "indented") || StringUtils::strCompare(listType, "+")) {
				fListString = "\t+ " + text;
			}
		}

		return fListString;
	}

	std::string GitDown::line(int length, int size)
	{
		std::string lineString;

		if (size == 1) {
			lineString = StringUtils::repeatString("-", length);
		} else if (size == 2) {
			lineString = StringUtils::repeatString("_", length);
		}

		return lineString;
	}
}
