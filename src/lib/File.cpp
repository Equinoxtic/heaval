#include "File.h"
#include "io/Stdio.h"

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
			Stdio::put("Unable to write to file.");
		}
	}

	std::string File::readFile(std::string file)
	{
		std::string ln;
		std::string fln;
		std::ifstream fFile(file);
		if (fFile.is_open())
		{
			while (std::getline(fFile, ln))
			{
				fln = ln;
			}
			fFile.close();
		}
		else
		{
			Stdio::put("Unable to open file.");
		}
		
		return fln;
	}

	void File::readFileOut(std::string file)
	{
		Stdio::put(File::readFile(file));
	}

	void File::clearFile(std::string file)
	{
		std::ofstream f(file);
		if (f.is_open())
		{
			f << ""; f.close();
		}
		else
		{
			Stdio::put("Unable to clear file.");
		}
	}

	bool File::fileExists(const std::string& name)
	{
		std::ifstream f(name.c_str()); return f.good();
	}
}