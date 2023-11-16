#include "main.h"
/**
 * write_str - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int write_str(va_list val)
{
	char *s;
	int i;
       int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}

