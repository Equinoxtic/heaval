#ifndef GUIGUIDE_H
#define GUIGUIDE_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: GuiGuide.h
	Source: src.framework.gui.utils
*/

#include<string>

namespace heaval
{
	class GuiGuide
	{
		public:
			/* Public variables / members go here. */

			static std::string createGuide(std::string guideContent);

			static void outputGuideList(std::string* guideList, int lsize, bool forcedCreate = false);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // GuiGuide.h
