#ifndef REPOSITORY_H
#define REPOSITORY_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Repository.h
	Source: src.framework.info
*/

#include<string>

namespace heaval
{
	class Repository
	{
		public:
			/* Public variables / members go here. */

			static std::string getRepositoryLink();

			static void outputReadme(bool promptOpen = false);

			static void outputRepositorySource(bool includeReadme, bool promptOpen = false);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Repository.h
