#include "Math.h"

namespace heaval
{
	void Math::setNum(int n) { intn = n; }
	void Math::setNum(float n) { floatn = n; }
	int Math::getIntNum() { return intn; }
	float Math::getFloatNum() { return floatn; }

	int Math::add(int x, int y) { return x + y; }
	int Math::subt(int x, int y) { return x - y; }
	int Math::mult(int x, int y) { return x * y; }
	int Math::div(int x, int y) { return x / y; }

	float Math::add(float x, float y) { return x + y; }
	float Math::subt(float x, float y) { return x - y; }
	float Math::mult(float x, float y) { return x * y; }
	float Math::div(float x, float y) { return x / y; }
}