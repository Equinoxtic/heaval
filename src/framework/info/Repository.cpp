#include "Repository.h"
#include "lib/git/GitUtils.h"
#include "lib/git/GitDown.h"
#include "lib/git/LibGit.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"
#include "io/StdUtils.h"
#include "framework/modules/display/Prompt.h"
#include "framework/modules/browselib/Link.h"
#include "framework/modules/handle/Process.h"

/*
	Auto-Generated C++ file for header: Repository.h (Created with CreateHeader.py)
	Name: Repository.cpp
	Source: src.framework.info
*/

namespace heaval
{
	/* Class definitions can go here. */

	void promptHandler(std::string promptOptionString, std::string linkCallback)
	{
		if (!StringUtils::stringEmpty(promptOptionString))
		{
			if (StringUtils::strCompare(promptOptionString, "Y") || StringUtils::strCompare(promptOptionString, "y"))
			{
				Link::openLink(linkCallback);
			}
			else if (StringUtils::strCompare(promptOptionString, "N") || StringUtils::strCompare(promptOptionString, "n"))
			{
				Stdio::putLn("\n" + Process::getCancel());
			}
		}
		else
		{
			Stdio::putLn("\n" + Process::getCancel());
		}
	}

	std::string Repository::getRepositoryLink()
	{
		return GitUtils::getRepoLink("Equinoxtic/heaval");
	}

	void Repository::outputReadme(bool promptOpen)
	{
		std::string promptOption;

		std::string readmeln[] = {
			GitDown::header("Heaval", 1),
			"\nA Minimal GUI framework for console applications made with C++ w/ CMake.",
			"\n" + GitDown::line(97, 1),
			"\n" + GitDown::header("Requirements", 2),
			GitDown::line(97, 2),
			"\n* Git - https://git-scm.com/downloads",
			"* CMake 3.2+ - https://cmake.org/download/",
			"* Visual Studio 2022 - https://visualstudio.microsoft.com/downloads/",
			"* Python (Optional) - https://www.python.org/downloads/",
			"\n" + GitDown::header("Building Documentation", 2),
			GitDown::line(97, 2),
			"\nFollow the link to get started on building Heaval from source.",
			"* Documentation - https://github.com/Equinoxtic/heaval/blob/master/docs/Building.md",
			"\n" + GitDown::header("Creating new headers", 2),
			GitDown::line(97, 2),
			"\nCreating a new header will require Python.",
			"\nRun the following code:\n\npython -u \"scripts/CreateHeader.py\"",
			"\n" + GitDown::line(97, 1),
			"\nExtra repository information",
			"* License - https://github.com/Equinoxtic/heaval/blob/master/LICENSE",
			"* Changelog - https://github.com/Equinoxtic/heaval/blob/lts/docs/Changelog.md",
			"* Config Folder - https://github.com/Equinoxtic/heaval/files/10299518/config.zip",
			"\nNote that running " + GitDown::highlight("Heaval.cpp") + " will only lead to you using a demo of what the framework\ncan do and what it is capable of."
		};

		GitUtils::createRepoHeader("Equinoxtic", "heaval");

		Stdio::put(StringUtils::repeatString("\n", 2));

		for (size_t i = 0; i < std::size(readmeln); ++i)
		{
			Stdio::put(readmeln[i] + "\n");
		}

		if (promptOpen)
		{
			StdUtils::newline();

			Stdio::put(Prompt::createOptionPrompt(
				"Open README?",
				"Y/N",
				"parenthesis"
			));

			Stdio::get(promptOption);
			
			promptHandler(promptOption, "https://github.com/Equinoxtic/heaval/blob/master/README.md");
		}
	}

	void Repository::outputRepositorySource(bool includeReadme, bool promptOpen)
	{
		std::string promptOption;
		
		std::string repositorySource[] = {
			LibGit::createFsItem(true, ".github/ISSUE_TEMPLATE"),
			LibGit::createFsItem(true, "config"),
			LibGit::createFsItem(true, "docs"),
			LibGit::createFsItem(true, "scripts"),
			LibGit::createFsItem(true, "src"),
			LibGit::createFsItem(false, ".gitignore", "", "Git Ignore File"),
			LibGit::createFsItem(false, "CMakeLists", "txt", "CMake Lists File"),
			LibGit::createFsItem(false, "Heaval", "cpp", "C++ Source File"),
			LibGit::createFsItem(false, "LICENSE", "", "License File"),
			LibGit::createFsItem(false, "README", "md", "README File"),
			LibGit::createFsItem(false, "build", "bat", "Batch Script File"),
			LibGit::createFsItem(false, "build", "sh", "Bash Script File")
		};
		

		Stdio::putLn(": " + StringUtils::surroundString("Equinoxtic/Heaval", "[ ", " ]") + "\n");

		LibGit::pushFileSystem(repositorySource, std::size(repositorySource));

		if (includeReadme)
		{
			Stdio::put("\n"); Repository::outputReadme();
		}

		if (promptOpen)
		{
			StdUtils::newline();

			Stdio::put(Prompt::createOptionPrompt(
				"Open Source Code?",
				"Y/N",
				"parenthesis"
			));
			
			Stdio::get(promptOption);

			promptHandler(promptOption, "https://github.com/Equinoxtic/heaval");
		}
	}
}
