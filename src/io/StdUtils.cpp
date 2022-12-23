#include "StdUtils.h"
#include "Stdio.h"

namespace heaval
{
	void StdUtils::newline()
	{
		Stdio::put("\n");
	}

	void StdUtils::tab()
	{
		Stdio::put("\t");
	}

	void StdUtils::backspace()
	{
		Stdio::put("\b");
	}


	void StdUtils::space()
	{
		Stdio::put(" ");
	}

	std::string StdUtils::getNewline()
	{
		return "\n";
	}

	std::string StdUtils::getTab()
	{
		return "\t";
	}

	std::string StdUtils::getBackspace()
	{
		return "\b";
	}

	std::string StdUtils::getSpace()
	{
		return " ";
	}
}