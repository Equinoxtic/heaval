#include "HeavalFramework.h"

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
		Stdio::putLn("Hello World!");
	}
}