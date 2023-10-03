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

void handle_rdwr(int fdrd, int fdwr, char *buff, char *av1, char *av2);
void handle_close(int fd);
void handle_args(int ac, char *av0);
int _strcmp(char *s1, char *s2);
int main(int ac, char **av);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
