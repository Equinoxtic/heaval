#include "HeavalFramework.h"
#include "FrameworkHooks.h"
#include "io/Stdio.h"

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
		Stdio::put("Hello, Heaval!");
		System::Pause();
	}
}
