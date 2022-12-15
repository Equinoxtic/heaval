#ifndef STDUTILS_H
#define STDUTILS_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: StdUtils
	Directory: src.io
*/

#include<string>

namespace heaval
{
	class StdUtils
	{
		public:

		// Public keywords go here...

			/* Create a newline character. */
			static void newline();

			/* Create a tab character. */
			static void tab();

			/* Create a space character. */
			static void space();

			/* Get the newline character. */
			static std::string getNewline();

			/* Get the tab character. */
			static std::string getTab();

			/* Get the space character. */
			static std::string getSpace();
			
		private:
		// Private keywords go here...
	};
}

#endif // StdUtils.h
