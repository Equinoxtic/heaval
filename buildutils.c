#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<sys/stat.h>
#include<stdbool.h>

int chk_path(const char* path_string)
{
	int res = 0;

	struct stat sb;

	if (S_ISDIR(sb.st_mode)) {
		res = 1; // true
	} else {
		res = 0; // false
	}

	return res;
}

bool chk_f(const char* f)
{
	struct stat buffer;
	return (stat(f, &buffer) == 0);
}

// I inspired code from tsoding, totally :hah:
int write_to_file(const char* file_path, const char* file_mode, const char* content_string)
{
	int res = 0;

	FILE *f = fopen(file_path, file_mode);
	
	if (f == NULL) {
		res = -1;
		goto defer;
	}
	
	fprintf(f, "%s", content_string);

	if (ferror(f)) {
		res = -1;
		goto defer;
	}

defer:
	if (f) fclose(f);
	return res;
}

// Function for executing system commands
void exec_cmd(const char* cmd_to_exec)
{
	char t_cmd[64];
	strcpy(t_cmd, cmd_to_exec);
	system(t_cmd);
}

int put_case_ch(const char* p_ch, const char* case_mode)
{
	char t_ch;

	int i = 0;

	while(p_ch[i]) {
		t_ch = p_ch[i];
		if (strcmp(case_mode, "upper") == 0) {
			putchar(toupper(t_ch));
		} else if (strcmp(case_mode, "lower") == 0) {
			putchar(tolower(t_ch));
		}
		++i;
	}

	return 0;
}

char* concat_string(const char* s1, const char* s2)
{
	char* res = malloc(strlen(s1) + strlen(s2) + 1);
	strcpy(res, s1);
	strcat(res, s2);
	return res;
}
