#include "main.h"

/**
 * write_str - Writes a string to stdout
 * @str: The string to be written
 * @count: Pointer to the count of characters written
 */

int write_str(va_list val)
{
	char *str;
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
