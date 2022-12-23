#ifndef MATH_UTILS_H
#define MATH_UTILS_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: MathUtils
	Directory: src.math
*/

#include<string>

namespace heaval
{
	class MathUtils 
	{
		public:
		// Public keywords go here...

		static bool isPositive(int n);

		static bool isPositive(float n);

		static bool isNegative(int n);

		static bool isNegative(float n);

		static std::string getStringDecimal(float n);
		
		private:
		// Private keywords go here...
	};
}

#endif // MathUtils.h
