#include "StdUtils.h"
#include "Stdio.h"

namespace heaval
{
	void StdUtils::newline()
	{
		Stdio::put(StdUtils::getNewline());
	}

	void StdUtils::tab()
	{
		Stdio::put(StdUtils::getTab());
	}

	void StdUtils::space()
	{
		Stdio::put(StdUtils::getSpace());
	}

	std::string StdUtils::getNewline()
	{
		return "\n";
	}

	std::string StdUtils::getTab()
	{
		return "\t";
	}

	std::string StdUtils::getSpace()
	{
		return " ";
	}
}