#ifndef TESTGUI_H
#define TESTGUI_H

/*
	Auto-Generated Header file created with CreateHeader.py.
	Name: TestGui.h
	Source: src.framework.gui
*/

#include<string>
#include "utils/Gui.h"

namespace heaval
{
	class TestGui : public Gui
	{	
		void create(); 
		void update(int state);

		public:
			/* Public variables / members go here. */

			static void load();
			
		private:
			/* Private variables / members go here. */
			
	};
}

#endif // TestGui.h
