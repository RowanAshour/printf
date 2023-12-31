#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;
int write_char(va_list val);
int write_str(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int write_percent(void);
int _printf(const char *format, ...);
int _putchar(char c);
int write_int(va_list args);
int write_dec(va_list args);
int write_b(va_list val);
int write_uns(va_list args);
int write_oct(va_list val);
int write_x(va_list val);
int write_hex(va_list val);
int write_s(va_list val);
int write_hex_extra(unsigned long int num);
int write_HEX_extra(unsigned long int num);

#endif
