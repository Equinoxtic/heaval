#include "Prompt.h"
#include "io/Stdio.h"
#include "lib/StringUtils.h"

/*
	Auto-Generated C++ file for header: Prompt.h (Created with CreateHeader.py)
	Name: Prompt.cpp
	Source: src.framework.modules.display
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string Prompt::YXOPTIONSTRING = "Select";

	std::string Prompt::YXOPTION = "Y/X";

	std::string Prompt::YXBORDER = "parenthesis";

	std::string Prompt::INPUTSTRING = "Input String";

	std::string Prompt::INPUTBORDER = "bracket";

	std::string Prompt::createOptionPrompt(std::string optionString, std::string options, std::string border)
	{
		std::string fPromptString;

		if (!StringUtils::stringEmpty(optionString) && !StringUtils::stringEmpty(border))
		{
			std::string borderString;

			std::string upperOptions = StringUtils::upperString(options);

			if (StringUtils::strCompare(border, "brackets")) {
				borderString = StringUtils::surroundString(upperOptions, "[", "]");
			} else if (StringUtils::strCompare(border, "parenthesis")) {
				borderString = StringUtils::surroundString(upperOptions, "(", ")");
			}

			fPromptString = StringUtils::surroundString(optionString, "[", "]") + " - " + borderString + " > ";
		}

		return fPromptString;
	}

	std::string Prompt::createInputPrompt(std::string inputString, std::string border)
	{
		std::string fPromptString;

		if (!StringUtils::stringEmpty(inputString) && !StringUtils::stringEmpty(border))
		{
			std::string borderString;

			if (StringUtils::strCompare(border, "brackets")) {
				borderString = StringUtils::surroundString(inputString, "[", "]");
			} else if (StringUtils::strCompare(border, "parenthesis")) {
				borderString = StringUtils::surroundString(inputString, "(", ")");
			}

			fPromptString = borderString + " > ";
		}

		return fPromptString;
	}

	void Prompt::displayOptionPrompt()
	{
		Stdio::put(Prompt::createOptionPrompt(Prompt::YXOPTIONSTRING, Prompt::YXOPTION, Prompt::YXBORDER));
	}

	void Prompt::displayInputPrompt()
	{
		Stdio::put(Prompt::createInputPrompt(Prompt::INPUTSTRING, Prompt::INPUTBORDER));
	}
}