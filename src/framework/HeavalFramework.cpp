#include "HeavalFramework.h"
#include "FrameworkHooks.h"
#include "io/Stdio.h"
#include "lib/StringUtils.h"
#include "lib/sys/System.h"
#include "parser/CommandParser.h"
#include "modules/browselib/Link.h"

namespace heaval
{
	HeavalFramework::HeavalFramework()
	{
		HeavalFramework::ENTRY_POINT(true);
	}

	HeavalFramework::~HeavalFramework() {}

	void HeavalFramework::ENTRY_POINT(bool isReinit)
	{
		std::string input;

		if (isReinit)
		{
			FrameworkHooks::IntializeHooks();
		}

		Link::openLink("https://github.com");

		FrameworkHooks::GenerateShellPrompt();

		Stdio::get(input);

		if (!StringUtils::stringEmpty(input))
		{
			CommandParser::parseHandler(input);
		}
		else
		{
			HeavalFramework::ENTRY_POINT(false);
		}
	}
}
