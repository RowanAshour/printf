#include "main.h"

/**
 * write_char - Writes a single character to stdout
 * @val: va_list argument
 *
 * Return: Number of characters written
 */

int write_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
