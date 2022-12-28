#ifndef GITUTILS_H
#define GITUTILS_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: GitUtils.h
	Source: src.lib.git
*/

#include<string>

namespace heaval
{
	class GitUtils
	{
		public:
			/* Public variables / members go here. */

			static std::string getReadMe(std::string readMeFile);

			static void createRepoHeader(std::string gitUsr, std::string repositoryName);
			
			static std::string getLicense(std::string licenseFile);

			static std::string getRepoLink(std::string link);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // GitUtils.h
