#include "Linebar.h"
#include "io/Stdio.h"
#include "lib/StringUtils.h"

/*
	Auto-Generated C++ file for header: Linebar.h (Created with CreateHeader.py)
	Name: Linebar.cpp
	Source: src.framework.modules.display
*/

namespace heaval
{
	 /* Class definitions can go here. */

	std::string Linebar::LINESTRING = "-";

	int Linebar::LINELENGTH = 65;

	std::string Linebar::createLinebar(std::string linebarString, int length)
	{
		return StringUtils::repeatString(linebarString, length);
	}

	void Linebar::displayLinebar()
	{
		Stdio::put(Linebar::createLinebar(Linebar::LINESTRING, Linebar::LINELENGTH));
	}
}