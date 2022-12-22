#ifndef CONVERT_H
#define CONVERT_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: Convert
	Directory: src.lib
*/

#include<string>
#include<sstream>

namespace heaval
{
	class Convert
	{
		public:
		// Public keywords go here...

		static std::stringstream numToStr(int intn);

		static std::stringstream numToStr(float fltn);

		static int strToInt(std::string strn);

		static float strToFl(std::string strfl);

		private:
		// Private keywords go here...
	};
}

#endif // Convert.h
