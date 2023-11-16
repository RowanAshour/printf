#include "main.h"

/**
 * write_char - prints a character.
 * @val: arguments.
 * Return: int.
*/

int write_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
