#ifndef LINK_H
#define LINK_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Link.h
	Source: src.framework.modules.browselib
*/

#include<string>

namespace heaval
{
	class Link
	{
		public:
			/* Public variables / members go here. */

			static std::string createLink(std::string linkString);

			static std::string protocolInit(std::string protocolType);

			static std::string getLink(std::string link);

			static void openLink(std::string link);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Link.h