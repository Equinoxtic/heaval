# Create Header script made in Python.

from os import system

def get_file(__file__):
	if not __file__ == "":
		return __file__

def write_to_file(_file, content, mode):
	if _file is not None or not _file == "":
		with open(get_file(_file), mode) as f:
			f.write(content)

def create_header():
	print("Input name: ", end="")
	name = input()
	print("Directory to create: ", end="")
	directory = input()
	rep_dir = directory.replace("/", ".")
	
	ln = [
		f"#ifndef {name.upper()}_H",
		f"#define {name.upper()}_H",
		"",
		"/*",
		"	Auto-Generated header file with CreateHeader.py",
		f"	Name: {name}"
		"",
		f"	Directory: {rep_dir}"
		"",
		"*/"
		"\n",
		"namespace heaval"
		"",
		"{",
		f"	class {name}",
		"	{",
		"		public:",
		"			// Public keywords go here...",
		"		private:",
		"			// Private keywords go here...",
		"	};",
		"}",
		"",
		f"#endif // {name}.h"
	]
	
	if name is not None:
		if directory is not None:
			system(f"touch {directory}/{name}.cpp")
			system(f"touch {directory}/{name}.h")
			for i in range(0, len(ln)):
				write_to_file(f"{directory}/{name}.h",
					ln[i] + "\n", "a"
				)
			write_to_file(f"{directory}/{name}.cpp",
				f"#include \"{name}.h\"", "a"
			)
			print(f"Created header files for {name}.* @ {directory}/")
		else:
			system(f"touch {name}.cpp")
			system(f"touch {name}.h")
			for i in range(0, len(ln)):
				write_to_file(f"{name}.h",
					ln[i], "w"
				)
			write_to_file(f"{directory}/{name}.cpp",
				f"#include \"{name}.h\"", "a"
			)
			print(f"Created header files for {name}.*")

create_header()