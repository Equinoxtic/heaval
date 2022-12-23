#ifndef FORMULA_H
#define FORMULA_H

/*
	Auto-Generated header file with CreateHeader.py
	Name: Formula
	Directory: src.math
*/

#include<string>

namespace heaval
{
	class Formula
	{
		public:
		// Public keywords go here...

		static std::string DEFAULT_OPERATION;

		static float DEFAULT_X;

		static float DEFAULT_Y;

		static std::string createFormula(std::string operation, float x, float y);

		static void formulaOutput();

		private:
		// Private keywords go here...
	};
}

#endif // Formula.h
