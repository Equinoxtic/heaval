#ifndef PROMPT_H
#define PROMPT_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Prompt.h
	Source: src.framework.modules.display
*/

#include<string>

namespace heaval
{
	class Prompt
	{
		public:
			/* Public variables / members go here. */

			static std::string YXOPTIONSTRING;

			static std::string YXBORDER;

			static std::string YXOPTION;

			static std::string INPUTSTRING;

			static std::string INPUTBORDER;

			static std::string createOptionPrompt(std::string optionString, std::string options, std::string border);

			static std::string createInputPrompt(std::string inputString, std::string border);

			static void displayOptionPrompt();

			static void displayInputPrompt();
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Prompt.h