#include "TestGui.h"
#include "io/Stdio.h"
#include "objects/TextBox.h"

/*
	Auto-Generated C++ file for header: TestGui.h (Created with CreateHeader.py)
	Name: TestGui.cpp
	Source: src.framework.gui
*/

namespace heaval
{
	/* Class definitions can go here. */

	void TestGui::create()
	{
		TextBox txtbox;
		txtbox.content = TextBox::setTextBoxContent("This is a TextBox, Hello.");
		TextBox::pushTextBox(&txtbox);
	}

	void TestGui::update(int state) {}

	void TestGui::load()
	{
		TestGui testGui; testGui.create();
	}
}
