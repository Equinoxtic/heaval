#include "StringUtils.h"

/*
	Auto-Generated C++ file for header: StringUtils.h with CreateHeader.py
	Name: StringUtils
	Directory: src.lib
*/

namespace heaval
{
	// Class definitions go here...

	/* DEPRECATED
	std::string caseString(int mode, std::string str) // For lowerString and upperString function.
	{
		std::string f_string;
		for (int i = 0; i < str.length(); ++i)
		{
			if (mode == 0)
			{
				f_string[i] = putchar(toupper(str[i]));
			}
			else if (mode == 1)
			{
				f_string[i] = putchar(tolower(str[i]));
			}
		}
		return f_string;
	}
	*/

	std::string StringUtils::quoteString(std::string content)
	{
		std::string fString = "\"" + content + "\""; return fString;
	}

	std::string StringUtils::surroundString(std::string content, std::string a, std::string b)
	{
		std::string fString;fString.append(a);
							fString.append(content);
							fString.append(b);
		return fString;
	}

	/* BOTH DEPRECATED UNTIL FIX.
	std::string StringUtils::upperString(std::string tStr)
	{
		return std::string(caseString(0, tStr));
	}

	std::string StringUtils::lowerString(std::string tStr)
	{
		return std::string(caseString(1, tStr));
	}
	*/

	std::string StringUtils::repeatString(std::string STRING, int LENGTH)
	{
		const int MAX_LENGTH = 256;

		std::string NEW_STRING;

		if (LENGTH >= 256)
		{
			LENGTH = MAX_LENGTH;
		}

		for (int i = 0; i < LENGTH; ++i)
		{
			if (!STRING.empty())
			{
				NEW_STRING += STRING;
			}
			else
			{
				NEW_STRING = "string";
			}
		}

		return NEW_STRING;
	}

	bool StringUtils::stringEmpty(std::string str)
	{
		bool isEmpty = (str.empty() ? true : false); return isEmpty;
	}

	bool StringUtils::strCompare(std::string a, std::string b)
	{
		return ((a == b) ? true : false);
	}

	bool StringUtils::startsWith(const std::string& str, const std::string& prefix)
	{
		return (str.size() >= prefix.size() && str.compare(0, prefix.size(), prefix)) == 0;
	}

	bool StringUtils::findString(std::string baseString, std::string targetString)
	{
		bool FOUND = false;

		std::size_t LOCAL_NPOS = std::string::npos,
					FOUND_STRING = baseString.find(targetString);

		if (!baseString.empty() && !targetString.empty())
		{
			FOUND = (FOUND_STRING != LOCAL_NPOS);
		}
		else
		{
			FOUND = false;
		}

		return FOUND;
	}
}