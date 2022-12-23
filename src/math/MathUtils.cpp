#include "MathUtils.h"
#include "lib/Convert.h"

#include<cmath>

namespace heaval
{
	bool MathUtils::isPositive(int n)
	{
		return ((n > 0) ? true : false);
	}

	bool MathUtils::isPositive(float n)
	{
		return ((n > 0.0) ? true : false);
	}

	bool MathUtils::isNegative(int n)
	{
		return ((n < 0) ? true : false);
	}

	bool MathUtils::isNegative(float n)
	{
		return ((n < 0.0) ? true : false);
	}

	std::string MathUtils::getStringDecimal(float n)
	{
		std::string stringN = std::to_string(n);
		return stringN.replace(stringN.length() - 4, stringN.length() + 1, "");
	}
}