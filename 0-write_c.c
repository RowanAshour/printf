#include "main.h"

/**
 * write_char - Writes a single character to stdout
 * @c: The character to be written
 * @count: Pointer to the count of characters written
 */

int write_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
