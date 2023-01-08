#ifndef BUILD_UTILS_H_
#define BUILD_UTILS_H_

#include<stdbool.h>

int write_to_file(const char* file_path, const char* file_mode, const char* content_string);
int chk_path(const char* path_string);
bool chk_f(const char* f);
void exec_cmd(const char* cmd_to_exec);
int put_case_ch(const char* p_ch, const char* case_mode);
char* concat_string(const char* s1, const char* s2);

#endif // buildutils.h
