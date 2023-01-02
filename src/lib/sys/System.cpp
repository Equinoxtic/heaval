#include "System.h"
#include "Platform.h"

/*
	Auto-Generated C++ file for header: System.h with CreateHeader.py
	Name: System
	Directory: src.lib.sys
*/

#include "io/Stdio.h"
#include "io/StdUtils.h"
#include "lib/StringUtils.h"

namespace heaval
{
	// Class definitions go here...

	void System::Exit(int exitStatus)
	{
		if (exitStatus == 1)
		{
			#ifdef _WIN32
				system("cls");
			#else
				system("clear");
			#endif
		}
		exit(0);
	}

	void System::Pause(int exitStatus)
	{
		Stdio::put(
			StringUtils::repeatString(StdUtils::getNewline(), 2) +
			"Press any key to continue..."
		); getchar();
		if (exitStatus == 1) {
			System::Exit(1);
		}
	}

	void System::Clear()
	{
		#ifdef _WIN32
			system("cls");
		#else
			system("clear");
		#endif
	}

	const char* System::getCommand(std::string __command__)
	{
		const char* fCommand = __command__.c_str(); return fCommand;
	}

	void System::Execute(std::string command)
	{
		if (Platform::checkPlatform("Windows"))
		{
			system(System::getCommand("powershell -command" + command));
		}
		else
		{
			system(System::getCommand(command));
		}
	}

	void System::ExecuteLone(std::string command)
	{
		system(System::getCommand(command));
	}
}
