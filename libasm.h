#ifndef LIBASM_H
#define LIBASM_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>

extern size_t ft_strlen(const char *s);
extern char* ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern ssize_t ft_write(int fd, const char *s, size_t count);
extern ssize_t ft_read(int fd, const char *s, size_t count);
extern char* ft_strdup(const char *s);

#endif
