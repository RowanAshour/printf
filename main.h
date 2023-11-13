#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int write_char(va_list val);
int write_str(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int write_percent(void);
int _printf(const char *format, ...);
int _putchar(char c);

#endif /* MAIN_H */
