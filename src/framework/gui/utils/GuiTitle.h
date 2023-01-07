#ifndef GUITITLE_H
#define GUITITLE_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: GuiTitle.h
	Source: src.framework.gui.utils
*/

#include<string>

namespace heaval
{
	class GuiTitle
	{
		public:
			/* Public variables / members go here. */

			std::string titleString;

			std::string titlePath;

			std::string titleSubPath;

			bool bordered;

			std::string titleContent;

			static std::string setTitleContent(std::string mainTitleString, std::string pathString, std::string subPathString, bool bordered = true);

			static void addTitle(GuiTitle &titleObject);

		private:
			/* Private variables / members go here. */
			
	};
}

#endif // GuiTitle.h
