#ifndef FILE_H
#define FILE_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: File.h
	Source: src.lib
*/

#include<string>
#include<iostream>
#include<fstream>

namespace heaval
{
	class File
	{
		public:
			/* Public variables / members go here. */

			static void writeFile(std::string file, std::string content);

			static std::string readFile(std::string file);

			static void readFileOut(std::string file);

			static void clearFile(std::string file);

			static bool fileExists(const std::string& name);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // File.h