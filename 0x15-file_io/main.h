#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>

void handle_close(int f_dr);
void handle_rdwr(int f_d, int f_dwr, char *BUFF, char *ptr1, char *ptr2);
void handle_args(int arg_number, char *arg_first);
int _strcmp(char *str1, char *str2);
int main(int ac, char **av);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
