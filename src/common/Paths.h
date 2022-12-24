#ifndef PATHS_H
#define PATHS_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Paths.h
	Source: src.common
*/

#include<string>

namespace heaval
{
	class Paths
	{
		public:
			/* Public variables / members go here. */

			static std::string getFile(std::string file, std::string ext = "txt");

			static std::string getLogFile();
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Paths.h