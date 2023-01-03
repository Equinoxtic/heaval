#include "Formula.h"
#include "Math.h"
#include "MathUtils.h"
#include "lib/StringUtils.h"
#include "lib/Convert.h"
#include "io/Stdio.h"

namespace heaval
{
	std::string Formula::DEFAULT_OPERATION = "add";
	float Formula::DEFAULT_X = 1.0f;
	float Formula::DEFAULT_Y = 1.5f;
	bool Formula::HINTS_ENABLED = false;

	std::string Formula::createFormula(std::string operation, float x, float y)
	{
		float res;

		std::string strResult;

		std::string fFormulaString;

		std::string operationCh;

		if (!StringUtils::stringEmpty(operation))
		{

			if (StringUtils::strCompare(operation, "add") || StringUtils::strCompare(operation, "addition")) {
				res = Math::add(x, y);
				operationCh = "+";
			} else if (StringUtils::strCompare(operation, "subt") || StringUtils::strCompare(operation, "subtraction")) {
				res = Math::subt(x, y);
				operationCh = "-";
			} else if (StringUtils::strCompare(operation, "mult") || StringUtils::strCompare(operation, "multiplication")) {
				res = Math::mult(x, y);
				operationCh = "*";
			} else if (StringUtils::strCompare(operation, "div") || StringUtils::strCompare(operation, "division")) {
				res = Math::div(x, y);
				operationCh = "/";
			}
			
			strResult = MathUtils::getStringDecimal(res);

			fFormulaString = MathUtils::getStringDecimal(x)
							+ " " + operationCh + " "
							+ MathUtils::getStringDecimal(y)
							+ " = " + strResult;
		}
		else
		{
			Formula::DEFAULT_OPERATION = "add";
			Formula::formulaOutput();
		}

		return fFormulaString;
	}

	std::string Formula::createAdvancedFormula(std::string operation, float x, float y, bool hints)
	{
		std::string fFormulaString;

		std::string fOperationString;

		std::string AREA_HEADER = "Area (A) = ";

		std::string hintStr;

		int operationInt;

		bool extraOperations = false;

		float res;

		std::string excludedList[8] = {
			"add", "addition",
			"subt", "subtraction",
			"mult", "multiplication",
			"div", "division"
		};

		if (!StringUtils::stringEmpty(operation))
		{
			for (int i = 0; i < 8; ++i)
			{
				extraOperations = (!StringUtils::strCompare(operation, excludedList[i]) ? true : false);
			}
		}

		if (extraOperations)
		{
			if (StringUtils::strCompare(operation, "square_area")) {
				res = Math::pwr(x, 2.0f);
				fOperationString = MathUtils::getStringDecimal(x) + "^2";
				operationInt = 1;
			} else if (StringUtils::strCompare(operation, "circle_area")) {
				res = Math::pi() * Math::pwr(x, 2.0f);
				fOperationString = "pi * " + MathUtils::getStringDecimal(x) + "^2";
				operationInt = 2;
			} else if (StringUtils::strCompare(operation, "raise")) {
				res = Math::pwr(x, y);
				fOperationString = MathUtils::getStringDecimal(x) + "^" + MathUtils::getStringDecimal(y);
				operationInt = 3;
			}

			if (hints)
			{
				switch(operationInt)
				{
					case 1:
						hintStr = AREA_HEADER + " base^2";
						break;
					case 2:
						hintStr = AREA_HEADER + " PI * radius^2";
						break;
					case 3:
						hintStr = "x^y = n";
						break;
				}
			}

			fFormulaString = (!StringUtils::stringEmpty(hintStr) ? StringUtils::surroundString(hintStr, "[", "]") + "\n\n" : "") +
							fOperationString + " = " + MathUtils::getStringDecimal(res);
		}
		else
		{
			fFormulaString = Formula::createFormula(operation, x, y);
		}

		return fFormulaString;
	}

	void Formula::formulaOutput()
	{
		Stdio::putLn(Formula::createFormula(Formula::DEFAULT_OPERATION, Formula::DEFAULT_X, Formula::DEFAULT_Y));
	}

	void Formula::advancedFormulaOutput()
	{
		Stdio::putLn(Formula::createAdvancedFormula(Formula::DEFAULT_OPERATION, Formula::DEFAULT_X, Formula::DEFAULT_Y, Formula::HINTS_ENABLED));
	}
}
