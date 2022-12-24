#ifndef TIME_H
#define TIME_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: Time.h
	Source: src.lib
*/

#include<string>

namespace heaval
{
	class Time
	{
		public:
			/* Public variables / members go here. */

			static std::string getTime();

			static std::string getDate();

			static std::string getTimeAndDate();
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // Time.h