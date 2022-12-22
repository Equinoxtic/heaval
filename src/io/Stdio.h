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

		static void put(std::string __string__);
		static void putBool(bool condition);
		static void putBoolName(bool condition);
		static void putNumber(int num);
		static void putNumber(float num);

		static void putLn(std::string __string__);
		static void putBoolLn(bool condition);
		static void putBoolNameLn(bool condition);
		static void putNumberLn(int num);
		static void putNumberLn(float num);

		static void get(std::string &stringptr);

		private:
;
		// Private keywords go here...
	};
} // Stdio.h