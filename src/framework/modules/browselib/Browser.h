#ifndef BROWSER_H
#define BROWSER_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Browser.h
	Source: src.framework.modules.browselib
*/

#include<string>

namespace heaval
{
	class Browser
	{
		public:
			/* Public variables / members go here. */

			static std::string getUrlInfo(std::string link);

			static void outputUrlInfo(std::string linkString);

			static void openUrl(std::string linkString);
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Browser.h