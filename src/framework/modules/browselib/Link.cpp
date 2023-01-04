#include "Link.h"
#include "lib/StringUtils.h"
#include "lib/sys/System.h"

/*
	Auto-Generated C++ file for header: Link.h (Created with CreateHeader.py)
	Name: Link.cpp
	Source: src.framework.modules.browselib
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string Link::createLink(std::string linkString)
	{
		std::string fLinkString;

		if (!StringUtils::stringEmpty(linkString))
		{
			if (!StringUtils::findString(linkString, ".com")) {
				fLinkString = linkString + ".com";
			} else {
				fLinkString = linkString;
			}
		}

		return fLinkString;
	}

	std::string Link::protocolInit(std::string protocolType)
	{
		std::string protocolString;

		if (!StringUtils::stringEmpty(protocolType))
		{
			if (StringUtils::strCompare(protocolType, "http")) {
				protocolString = "http://";
			} else if (StringUtils::strCompare(protocolType, "https")) {
				protocolString = "https://";
			}
		}

		return protocolString;
	}

	std::string Link::getLink(std::string link)
	{
		return protocolInit("https") + createLink(link);
	}

	void Link::openLink(std::string link)
	{
		std::string linkPrefix;

		if (!StringUtils::stringEmpty(link))
		{
			if (!StringUtils::startsWith(link, "https://")) {
				linkPrefix = protocolInit("https") + link;
			} else {
				linkPrefix = link;
			}
		}
		else
		{
			linkPrefix = "https://google.com";
		}

		System::Execute("start " + linkPrefix);
	}
}
