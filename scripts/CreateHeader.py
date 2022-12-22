# Improved Create Header script by Lari_ssa.

from os import system

# Text Colors
RED = "\033[0;31m"
ORANGE = "\033[0;38m"
GREEN = "\033[0;32m"
YELLOW = "\033[1;33m"
CYAN = "\033[0;36m"
LIGHT_CYAN = "\033[1;36m"
PURPLE = "\033[0;35m"
LIGHT_PURPLE = "\033[1;35m"
LIGHT_WHITE = "\033[1;37m"
DARK_GRAY = "\033[1;30m"
LIGHT_GREEN = "\033[1;32m"
LIGHT_GRAY = "\033[0;37m"
BLUE = "\033[0;34m"
LIGHT_BLUE = "\033[1;34m"

# Styles
BOLD = "\033[1m"
ITALIC = "\033[3m"
UNDERLINE = "\033[4m"
CROSSED = "\033[9m"
END = "\033[0m"

# Message Prefixes
WARN = f"{ORANGE}WARNING{END}"
ERROR = f"{RED}ERROR{END}"
SUCCESS = f"{GREEN}SUCCESS{END}"

def get_file(__file__):
	if not __file__ == "":
		return __file__

def write_to_file(_file, content, mode):
	if _file is not None or not _file == "":
		with open(get_file(_file), mode) as f:
			f.write(content)

def create_files(dirptr, nameptr):
	system(f"touch {dirptr}/{nameptr}.cpp")
	system(f"touch {dirptr}/{nameptr}.h")

def write_to_header_files(dirptr, nameptr, lntable=None):
	if lntable is None:
		lntable = []
	write_to_file(f"{dirptr}/{nameptr}", lntable, "a")

def create_header_sources(dirptr, nameptr, extptr, tbl=None):
	if tbl is None:
		tbl = []
	for i in range(0, len(tbl)):
		write_to_header_files(dirptr, f"{nameptr}.{extptr}", tbl[i])

def print_title():
	print(f"{GREEN}[C++ Header Creation Script]{END}\n {BLUE}~ By{END} {PURPLE}Larixssa{END} {RED}<3{END}")

def create_header():
	print_title()
	name = ""
	directory = "src"
	print(f"\n{CYAN}[Input name]{END} {GREEN}~ ${END} ", end="")
	name = input()
	print(f"{CYAN}[Directory to create]{END} {GREEN}~ ${END} ", end="")
	directory = input()
	rep_dir = directory.replace("/", ".")
	
	h_file_ln = [
		f"#ifndef {name.upper()}_H",
		f"\n#define {name.upper()}_H",
		"\n\n",
		"/*\n",
		"\tAuto-Generated Header file created with CreateHeader.py.\n",
		f"\tName: {name}.h\n",
		f"\tSource: {rep_dir}\n",
		"*/",
		"\n\n",
		"#include<string>",
		"\n\n"
		"namespace heaval\n",
		"{\n",
		f"\tclass {name}\n",
		"\t{\n",
		"\t\tpublic:\n",
		"\t\t\t/* Public variables / members go here. */\n",
		"\t\t\t\n",
		"\t\tprivate:\n",
		"\t\t\t/* Private variables / members go here. */\n",
		"\t\t\t\n",
		"\t};\n",
		"}",
		"\n\n#endif // " + f"{name}.h"
	]

	cpp_file_ln = [
		f"#include \"{name}.h\"",
		"\n\n",
		"/*\n",
		"\tAuto-Generated C++ file for header: " + f"{name}.h (Created with CreateHeader.py)\n",
		f"\tName: {name}.cpp\n",
		f"\tSource: {rep_dir}\n",
		"*/",
		"\n\n",
		"namespace heaval\n",
		"{\n",
		"\t /* Class definitions can go here. */\n",
		"}"
	]

	# class_str = f"#include \"{name}.h\"" + "\n\nnamespace heaval\n{" + f"\n\tclass {name}" + "\n\t{\n\t\t// Class Deinitions go here...\n\t};\n}"
	
	if name is not [None, ""]:
		if directory is not [None, ""]:
			create_files(directory, name)
			create_header_sources(directory, name, "h", h_file_ln)
			create_header_sources(directory, name, "cpp", cpp_file_ln)
			print(f"{BLUE}Created header files for {name}{END} @ {GREEN}[\"~/{directory}/\"]{END}")



create_header()