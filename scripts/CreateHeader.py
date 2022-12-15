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

	class_ln = [
		f"#include \"{name}.h\"",
		"\n\n",
		"/*\n",
		"\tAuto-Generated C++ file for header: " + f"{name}.h with CreateHeader.py",
		f"\n\tName: {name}\n\tDirectory: {rep_dir}\n",
		"*/\n",
		"\n",
		"namespace heaval\n",
		"{\n",
		f"\tclass {name}\n"
		"\t{\n",
		"\t\t// Class definitions go here...\n",
		"\t};\n",
		"}"
	]

	# class_str = f"#include \"{name}.h\"" + "\n\nnamespace heaval\n{" + f"\n\tclass {name}" + "\n\t{\n\t\t// Class Deinitions go here...\n\t};\n}"
	
	if name is not None:
		if directory is not None:
			system(f"touch {directory}/{name}.cpp")
			system(f"touch {directory}/{name}.h")
			for i in range(0, len(ln)):
				write_to_file(f"{directory}/{name}.h",
					ln[i] + "\n", "a"
				)
			for i in range(0, len(class_ln)):
				write_to_file(f"{directory}/{name}.cpp",
					class_ln[i], "a"
				)
			print(f"Created header files for {name}.* @ {directory}/")

create_header()