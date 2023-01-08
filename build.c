#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "buildutils.h"

int main(int argc, char **argv)
{
	if (chk_path("build/") == 0)
	{
		exec_cmd("mkdir build");
		exec_cmd("cmake -G \"Visual Studio 17 2022\" -A Win32 -S . -B build");
	}

	exec_cmd("cmake --build build --target heavalframework --config Release");

	// Create directories
	if (chk_path("build/Release/config/") == 0 || chk_path("build/Release/logs/") == 0)
	{
		#ifdef _WIN32
			exec_cmd("mkdir build\\Release\\config");
			exec_cmd("mkdir build\\Release\\logs");
		#else
			exec_cmd("mkdir build/Release/config/");
			exec_cmd("mkdir build/Release/logs/");
		#endif
	}

	// Create Files
	if (
				chk_f("build/Release/logs/logfile.txt") == 0
			||	chk_f("build/Release/config/default_shell_type.txt") == 0 
			||	chk_f("build/Release/config/shell_type.txt") == 0
			||	chk_f("build/Release/config/shell_usr.txt") == 0
		)
	{
		#ifdef _WIN32
			exec_cmd("type nul > build\\Release\\logs\\logfile.txt");
			exec_cmd("type nul > build\\Release\\config\\default_shell_type.txt");
			exec_cmd("type nul > build\\Release\\config\\shell_type.txt");
			exec_cmd("type nul > build\\Release\\config\\shell_usr.txt");
		#else
			exec_cmd("touch build/Release/logs/logfile.txt");
			exec_cmd("touch build/Release/config/default_shell_type.txt");
			exec_cmd("touch build/Release/config/shell_type.txt");
			exec_cmd("touch build/Release/config/shell_usr.txt");
		#endif

		write_to_file("build/Release/config/default_shell_type.txt", "w", "custom");
		write_to_file("build/Release/config/shell_type.txt", "w", "~$");
		write_to_file("build/Release/config/shell_usr.txt", "w", "[usr@console]:");
	}

	#ifdef _WIN32
		exec_cmd("powershell -command ./build/Release/heavalframework.exe");
	#else
		exec_cmd("./build/Release/heavalframework.exe");
	#endif

	return 0;
}
