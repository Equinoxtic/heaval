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

	void Formula::formulaOutput()
	{
		Stdio::put(Formula::createFormula(Formula::DEFAULT_OPERATION, Formula::DEFAULT_X, Formula::DEFAULT_Y));
	}
}