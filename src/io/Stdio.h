#pragma once

/*
	Auto-Generated header file with CreateHeader.py
	Name: Stdio
	Directory: src.io
*/

#include<string>

namespace heaval
{
	class Stdio
	{
		public:

		// Public keywords go here...

		static void put(std::string strContent);
		static void put(bool content);
		static void put(int content);
		static void put(float content);

		static void putLn(std::string strContent);
		static void putLn(bool content);
		static void putLn(int content);
		static void putLn(float content);

		static void get(std::string &stringptr);

		private:

		// Private keywords go here...
	};
} // Stdio.h