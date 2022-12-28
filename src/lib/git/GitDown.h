#ifndef GITDOWN_H
#define GITDOWN_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: GitDown.h
	Source: src.lib.git
*/

#include<string>

namespace heaval
{
	class GitDown
	{
		public:
			/* Public variables / members go here. */
			
			static std::string header(std::string text, int heading);

			static std::string italic(std::string text);

			static std::string strong(std::string text);

			static std::string highlight(std::string text);

			static std::string list(std::string text, std::string listType);

			static std::string line(int length, int size);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // GitDown.h
