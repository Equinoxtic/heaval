#include "DialogueBox.h"
#include "TextBox.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"
#include "InstanceLogger.h"

/*
	Auto-Generated C++ file for header: DialogueBox.h (Created with CreateHeader.py)
	Name: DialogueBox.cpp
	Source: src.framework.gui.objects
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string DialogueBox::setDialogueBoxContent(std::string dialogueBoxContent, std::string dbPromptType)
	{
		std::string fDialogueBoxString;

		std::string fDialogueBoxPrompt;

		if (!StringUtils::stringEmpty(dialogueBoxContent))
		{
			fDialogueBoxString = TextBox::setTextBoxContent(dialogueBoxContent);

			if (StringUtils::strCompare(dbPromptType, "input")) {
				fDialogueBoxPrompt = "Choice: ";
			} else if (StringUtils::strCompare(dbPromptType, "y/x")) {
				fDialogueBoxPrompt = "[Y] | [X]:";
			}
		}

		return fDialogueBoxString + "\n" + fDialogueBoxPrompt;
	}

	std::string DialogueBox::setDialogueBoxPromptType(std::string promptTypeString)
	{
		std::string ptype_parse;

		if (
					StringUtils::strCompare(promptTypeString, "input") ||	StringUtils::strCompare(promptTypeString, "nochoice")
				||	StringUtils::strCompare(promptTypeString, "parsestring")
				||	StringUtils::strCompare(promptTypeString, "inputstring")
		   )
		{
			ptype_parse = "input";
		}
		else if (
					StringUtils::strCompare(promptTypeString, "y/x")
				||	StringUtils::strCompare(promptTypeString, "haschoice")
				||	StringUtils::strCompare(promptTypeString, "promptful")
				||	StringUtils::strCompare(promptTypeString, "yesorno")
			)
		{
			ptype_parse = "y/x";
		}
		else
		{
			ptype_parse = "input";
		}
	}

	std::string DialogueBox::getDialogueBoxName(DialogueBox &dialogueBoxObject)
	{
		return dialogueBoxObject.name;
	}

	void DialogueBox::outDialogueBoxName(DialogueBox &dialogueBoxObject)
	{
		Stdio::put(dialogueBoxObject.name);
	}

	void DialogueBox::pushDialogueBox(DialogueBox &dialogueBoxObject)
	{
		InstanceLogger::logFromString("dialogue anyone?", "DialogueBox", dialogueBoxObject.name);
		Stdio::put(dialogueBoxObject.content);
	}
}
