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

		static bool HINTS_ENABLED;

		static std::string createFormula(std::string operation, float x, float y);

		static std::string createAdvancedFormula(std::string operation, float x, float y, bool hints);

		static void formulaOutput();

		static void advancedFormulaOutput();

		private:
		// Private keywords go here...
	};
}

#endif // Formula.h
