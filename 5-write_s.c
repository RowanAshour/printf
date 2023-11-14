#include "main.h"

/**
 * write_s - print exclusive string.
 * @args: parameter.
 * Return: integer.
 */
int write_s(va_list args)
{
	char *str;
	int i, length = 0;
	int value;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length += 2;
			value = str[i];

			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length += write_HEX_extra(value);
		}
		else
		{
			_putchar(str[i]);
			length++;
		}
	}

	return (length);
}

