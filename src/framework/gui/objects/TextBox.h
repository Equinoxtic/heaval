#ifndef TEXTBOX_H
#define TEXTBOX_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: TextBox.h
	Source: src.framework.gui.objects
*/

#include<string>

namespace heaval
{
	class TextBox
	{
		public:
			/* Public variables / members go here. */

			std::string name;

			std::string content;

			static std::string setTextBoxContent(std::string textContent);

			static void pushTextBox(TextBox &textBoxObject);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // TextBox.h
