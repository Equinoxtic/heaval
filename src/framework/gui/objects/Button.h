#ifndef BUTTON_H
#define BUTTON_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Button.h
	Source: src.framework.gui.objects
*/

#include<string>

namespace heaval
{
	class Button
	{
		public:
			/* Public variables / members go here. */

			std::string name;

			std::string content;

			static std::string setButtonContent(std::string buttonContent, bool spaced = false);

			static std::string getButtonName(Button &buttonObject);

			static void outButtonName(Button &buttonObject);

			static void pushButton(Button &buttonObject);

		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Button.h
