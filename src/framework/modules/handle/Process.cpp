#include "Process.h"
#include "lib/StringUtils.h"
#include "io/Stdio.h"

/*
	Auto-Generated C++ file for header: Process.h (Created with CreateHeader.py)
	Name: Process.cpp
	Source: src.framework.modules.handle
*/

namespace heaval
{
	/* Class definitions can go here. */

	std::string Process::DEFAULT_PROCESS_TYPE = "cancel";

	std::string Process::getTypedProcess(std::string type)
	{
		std::string fProcString;

		if (!StringUtils::stringEmpty(type))
		{
			if (StringUtils::strCompare(type, "cancel")) {
				fProcString = Process::getCancel();
			} else if (StringUtils::strCompare(type, "updating")) {
				fProcString = Process::getUpdate();
			} else if (StringUtils::strCompare(type, "running")) {
				fProcString = Process::getRunning();
			}
		}

		return fProcString;
	}

	std::string Process::getCancel()
	{
		return StringUtils::surroundString("PROCESS CANCELLED", "[", "]");
	}

	std::string Process::getUpdate()
	{
		return StringUtils::surroundString("UPDATING PROCESS", "[", "]");
	}

	std::string Process::getRunning()
	{
		return StringUtils::surroundString("PROCESS RUNNING", "[", "]");
	}

	void Process::outputProcess()
	{
		Stdio::put(Process::getTypedProcess(Process::DEFAULT_PROCESS_TYPE));
	}
}