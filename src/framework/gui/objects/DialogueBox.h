#ifndef DIALOGUEBOX_H
#define DIALOGUEBOX_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: DialogueBox.h
	Source: src.framework.gui.objects
*/

#include<string>

namespace heaval
{
	class DialogueBox
	{
		public:
			/* Public variables / members go here. */

			std::string name;

			std::string promptType;
			
			std::string content;

			static std::string setDialogueBoxContent(std::string dialogueBoxContent, std::string dbPromptType);

			static std::string setDialogueBoxPromptType(std::string promptTypeString);

			static void pushDialogueBox(DialogueBox &dialogueBoxObject);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // DialogueBox.h
