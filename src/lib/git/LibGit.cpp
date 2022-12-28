#include "LibGit.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"

/*
	Auto-Generated C++ file for header: LibGit.h (Created with CreateHeader.py)
	Name: LibGit.cpp
	Source: src.lib.git
*/

namespace heaval
{
	/* Class definitions can go here. */

	void LibGit::pushCurrentBranch(std::string branchName)
	{
		std::cout << StringUtils::surroundString(" " + branchName, "[ ", " ]");
	}

	void LibGit::pushFileSystem(std::string* fsList, size_t listSize)
	{
		for (size_t i = 0; i < listSize; ++i)
		{
			Stdio::put(fsList[i] + "\n");
		}
	}

	std::string LibGit::createFsItem(bool isDirectory, std::string name, std::string ext, std::string filetype)
	{
		std::string dirId;

		std::string fFsItem;

		if (isDirectory) {
			dirId = "[-D] ";
		} else {
			dirId = "[F-] ";
		}

		if (!StringUtils::stringEmpty(name))
		{
			if (!isDirectory)
			{
				fFsItem = dirId + name + (!StringUtils::stringEmpty(ext) ? "." : "" ) + ext + " // " + filetype;
			}
			else
			{
				fFsItem = dirId + name;
			}
		}

		return fFsItem;
	}
}