#ifndef LIBGIT_H
#define LIBGIT_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: LibGit.h
	Source: src.lib.git
*/

#include<string>
#include<iostream>

namespace heaval
{
	class LibGit
	{
		public:
			/* Public variables / members go here. */

			static void pushCurrentBranch(std::string branchName);

			static void pushFileSystem(std::string* fsList, size_t listSize);

			static std::string createFsItem(bool isDirectory, std::string name, std::string ext = "c", std::string filetype = "C Source File");
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // LibGit.h