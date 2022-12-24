#include "File.h"

/*
	Auto-Generated C++ file for header: File.h (Created with CreateHeader.py)
	Name: File.cpp
	Source: src.lib
*/

namespace heaval
{
	/* Class definitions can go here. */

	void File::writeFile(std::string file, std::string content)
	{
		std::ofstream tFile(file, std::ios::app);
		if (tFile.is_open())
		{
			tFile << content + "\n";
			tFile.close();
		}
		else
		{
			std::cout << "Unable to write to file.";
		}
	}

	void File::readFile(std::string file)
	{
		std::string ln;
		std::ifstream fFile(file);
		if (fFile.is_open())
		{
			while (std::getline(fFile, ln))
			{
				std::cout << ln;
			}
			fFile.close();
		}
		else
		{
			std::cout << "Unable to open file.";
		}
	}
}