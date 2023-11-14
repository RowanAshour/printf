#include "main.h"

/**
 * write_string - print exclusive string.
 * @val: parameter.
 * Return: integer.
 */
int write_string(va_list val)
{
	char *input_string;
	int i, length = 0;
	int char_value;

	input_string = va_arg(val, char *);
	if (input_string == NULL)
		input_string = "(null)";

	for (i = 0; input_string[i] != '\0'; i++)
	{
		if (input_string[i] < 32 || input_string[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			char_value = input_string[i];

			if (char_value < 16)
			{
				_putchar('0');
				length++;
			}

			length = length + write_HEX_extra(char_value);
		}
		else
		{
			_putchar(input_string[i]);
			length++;
		}
	}
	return (length);
}

