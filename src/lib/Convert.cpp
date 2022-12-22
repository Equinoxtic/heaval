#include "Convert.h"

namespace heaval
{
	int castToInt(std::string str)
	{
		int n_int;
		for (int i = 0; i < str.length(); ++i)
		{
			if (!str.empty())
			{
				n_int = static_cast<int>(str[i]);
			}
			else
			{
				n_int = 1;
			}
		}
		return n_int;
	}

	float castToFloat(std::string str)
	{
		float f_float;
		for (int i = 0; i < str.length(); ++i)
		{
			if (!str.empty())
			{
				f_float = static_cast<float>(str[i]);
			}
			else
			{
				f_float = 1.0f;
			}
		}
		return f_float;
	}

	std::stringstream Convert::numToStr(int intn)
	{
		std::stringstream convertedNumber;
		convertedNumber << intn;
		return convertedNumber;
	}

	std::stringstream Convert::numToStr(float fltn)
	{
		std::stringstream convertedNumber;
		convertedNumber << fltn;
		return convertedNumber;
	}

	int strToInt(std::string strn)
	{
		int cInt; 
		
		if (!strn.empty())
		{
			cInt = castToInt(strn);
		}
		else
		{
			cInt = 1;
		}
		
		return cInt;
	}

	float strToFl(std::string strfl)
	{
		float cFloat;
		
		if (!strfl.empty())
		{
			cFloat = castToFloat(strfl);
		}
		else
		{
			cFloat = 1.0f;
		}
		
		return cFloat;
	}
}