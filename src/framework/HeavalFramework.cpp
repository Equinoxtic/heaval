#include "HeavalFramework.h"
#include "FrameworkHooks.h"
#include "io/Stdio.h"
#include "lib/StringUtils.h"
#include "lib/sys/System.h"
#include "cmdutils/Command.h"
#include "math/Formula.h"

namespace heaval
{
	HeavalFramework::HeavalFramework()
	{
		HeavalFramework::ENTRY_POINT();
	}

	HeavalFramework::~HeavalFramework() {}

	void HeavalFramework::ENTRY_POINT()
	{
		FrameworkHooks::IntializeHooks();
	}
}
