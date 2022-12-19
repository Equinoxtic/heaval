#include "Thread.h"

/*
	Auto-Generated C++ file for header: Thread.h with CreateHeader.py
	Name: Thread
	Directory: src.lib
*/

namespace heaval
{
	// Class definitions go here...

	unsigned Thread::getSleepTime(unsigned ms)
	{
		return ms * 1000;
	}

	#ifdef _WIN32

		#include<Windows.h>

		void Thread::cSleep(unsigned ms)
		{
			Sleep(Thread::getSleepTime(ms));
		}

		void Thread::msSleep(unsigned ms)
		{
			Sleep(ms);
		}

	#else

		#include<unistd.h>

		void Thread::cSleep(unsigned ms)
		{
			usleep(Thread::getSleepTime(ms));
		}


		void Thread::msSleep(unsigned ms)
		{
			usleep(ms);
		}

	#endif
}
