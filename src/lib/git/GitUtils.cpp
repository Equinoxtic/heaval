#include "GitUtils.h"
#include "lib/File.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"

/*
	Auto-Generated C++ file for header: GitUtils.h (Created with CreateHeader.py)
	Name: GitUtils.cpp
	Source: src.lib.git
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string GitUtils::getReadMe(std::string readMeFile)
	{
		return File::readFile(readMeFile);
	}

	void GitUtils::createRepoHeader(std::string gitUsr, std::string repositoryName)
	{
		std::string repoHeader;

		if (!StringUtils::stringEmpty(gitUsr) && !StringUtils::stringEmpty(repositoryName))
		{
			repoHeader = StringUtils::surroundString(gitUsr + "/" + repositoryName + " - README", "[ ", " ]");
		}

		Stdio::put(repoHeader);
	}

	std::string GitUtils::getLicense(std::string licenseFile)
	{
		return File::readFile(licenseFile);
	}

	std::string GitUtils::getRepoLink(std::string link)
	{
		return "https://github.com/" + link;
	}
}
