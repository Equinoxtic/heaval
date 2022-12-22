#ifndef VERSION_H
#define VERSION_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: Version
	Directory: src.framework.info
*/

#include<string>

namespace heaval
{
	class Version
	{
		public:
			// Public keywords go here...

			static std::string getVersion();

			static std::string getBuildRelease();

			static std::string getVersionOf(std::string vType);

		private:
			// Private keywords go here...
	};
}

#endif // Version.h
