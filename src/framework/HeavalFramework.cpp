#include "HeavalFramework.h"

#include "io/Stdio.h"
#include "lib/StringUtils.h"

namespace heaval
{
	HeavalFramework::HeavalFramework()
	{
		HeavalFramework::ENTRY_POINT();
	}

	HeavalFramework::~HeavalFramework() {}

	void HeavalFramework::ENTRY_POINT()
	{
		Stdio::put(StringUtils::upperString("Hello World!"));
	}
}