#ifndef FRAMEWORKHOOKS_H
#define FRAMEWORKHOOKS_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: FrameworkHooks
	Directory: src.framework
*/

namespace heaval
{
	class FrameworkHooks
	{
		public:
			// Public keywords go here...

			static void GenerateTitle();

			static void GenerateOptions();

			static void GenerateShellPrompt();

			static void IntializeHooks(bool doClearScreen = true, bool showTitle = true, bool showOptions = false);

		private:
			// Private keywords go here...
	};
}

#endif // FrameworkHooks.h
