#ifndef TITLE_H
#define TITLE_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: Title
	Directory: src.framework.modules.display
*/

#include<string>

namespace heaval
{
	class Title
	{
		public:
			// Public keywords go here...

			static std::string DEFAULT_TITLE_STRING;

			static std::string createTitle(std::string titleString, std::string versionString, bool showVersion);

			static void displayTitle();

		private:
			// Private keywords go here...
	};
}

#endif // Title.h
