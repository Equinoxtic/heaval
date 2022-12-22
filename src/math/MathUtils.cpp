#include "MathUtils.h"

namespace heaval
{
	bool MathUtils::isPositive(int n)
	{
		return ((n >= 0) ? true : false);
	}

	bool MathUtils::isNegative(int n)
	{
		return ((n < 0) ? true : false);
	}
}