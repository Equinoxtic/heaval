#include "Stdio.h"
#include "StdUtils.h"
#include "lib/StringUtils.h"

#include<iostream>

namespace heaval
{
	void Stdio::put(std::string __string__)
	{
		std::string fString;

		if (!StringUtils::stringEmpty(__string__)) {
			fString = __string__;
		} else {
			fString = "string";
		}

		std::cout << fString;
	}

	void Stdio::putBool(bool condition)
	{
		std::cout << condition;
	}

	void Stdio::putBoolName(bool condition)
	{
		std::string stringBool;

		if (condition == 1 || condition == true) {
			stringBool = "true";
		} else if (condition == 0 || condition == false) {
			stringBool = "false";
		} else {
			stringBool = "false";
		}

		std::cout << stringBool;
	}

	void Stdio::putNumber(int num)
	{
		std::cout << num;
	}

	void Stdio::putNumber(float num)
	{
		std::cout << num;
	}

	void Stdio::putLn(std::string __string__)
	{
		Stdio::put(__string__); StdUtils::newline();
	}

	void Stdio::putBoolLn(bool condition)
	{
		Stdio::putBool(condition); StdUtils::newline();
	}

	void Stdio::putBoolNameLn(bool condition) 
	{
		Stdio::putBoolName(condition); StdUtils::newline();
	}

	void Stdio::putNumberLn(int num)
	{
		Stdio::putNumber(num); StdUtils::newline();
	}

	void Stdio::putNumberLn(float num)
	{
		Stdio::putNumber(num); StdUtils::newline();
	}

	void Stdio::get(std::string &strptr)
	{
		std::getline(std::cin, strptr);
	}
}