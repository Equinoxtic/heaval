#include "Browser.h"
#include "Link.h"
#include "lib/StringUtils.h"
#include "lib/sys/System.h"
#include "io/Stdio.h"
#include "framework/modules/handle/Warning.h"

/*
	Auto-Generated C++ file for header: Browser.h (Created with CreateHeader.py)
	Name: Browser.cpp
	Source: src.framework.modules.browselib
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string Browser::getUrlInfo(std::string link)
	{
		std::string fUrlInfo;
		std::string urlName;
		std::string urlHeader = "URL: ";
		std::string siteHeader = "Site: ";

		std::string siteList[] = {
			"youtube.com",
			"discord.com",
			"twitter.com",
			"facebook.com",
			"github.com",
			"twitch.com",
			"roblox.com"
		};


		std::string nameList[] = {
			"YouTube",
			"Discord",
			"Twitter",
			"Facebook",
			"GitHub",
			"Twitch",
			"ROBLOX"
		};

		bool foundUrl = false;
		
		if (!StringUtils::stringEmpty(link))
		{
			for (int i = 0; i < std::size(siteList); ++i)
			{
				if (StringUtils::findString(link, siteList[i]))
				{
					foundUrl = true;
					urlName = nameList[i];
					break;
				}
			}

			if (foundUrl)
			{
				fUrlInfo = siteHeader + urlName + "\n" + urlHeader + link;
			}
			else
			{
				fUrlInfo = "Link: " + link;
			}
		}
		else
		{
			fUrlInfo = "NULL_INFO";
		}

		return fUrlInfo;
	}

	void Browser::outputUrlInfo(std::string linkString)
	{
		Stdio::put(Browser::getUrlInfo(linkString));
	}
}