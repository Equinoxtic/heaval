// Serves as the Main Entry point of the application.

#include "Heaval.h"
#include "io/Stdio.h"


namespace heaval
{
	Heaval::Heaval()
	{
		Stdio standardio;
		standardio.put("Hello World!");
	}

	Heaval::~Heaval() {}
}

int main(int argc, char** argv)
{
	heaval::Heaval();
}