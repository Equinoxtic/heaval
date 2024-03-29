#ifndef STRINGUTILS_H
#define STRINGUTILS_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: StringUtils
	Directory: src.lib
*/

#include<string>

namespace heaval
{
	class StringUtils
	{
		public:

			// Public keywords go here...
			
			// Surround a string in quotes.
			static std::string quoteString(std::string content);

			// Surround a string in specific characters.
			static std::string surroundString(std::string content, std::string a, std::string b);

			/* BOTH DEPRECATED UNTIL FIX.
			// Uppercase a string.
			static std::string upperString(std::string tStr);

			// Lowercase a string.
			static std::string lowerString(std::string tStr);
			*/

			// Repeat a certain string, and returns it.
			static std::string repeatString(std::string STRING, int LENGTH);

			// Check if string is empty.
			static bool stringEmpty(std::string str);

			// Compare two strings.
			static bool strCompare(std::string a, std::string b);

			// Check whether if string starts with a specific string.
			static bool startsWith(const std::string& str, const std::string& prefix);

			// Find a string inside of a string.
			static bool findString(std::string baseString, std::string targetString);

		private:
			// Private keywords go here...
	};
}

#endif // StringUtils.h
