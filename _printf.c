#include "main.h"

/**
 * _printf - function that selects the correct function to print.
 *
 * @format: identifier to look for.
 *
 * Return: length of string.
*/

int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", write_str}, {"%c", write_char}, {"%%", write_percent},
		{"%i", write_int}, {"%d", write_dec}, {"%b", write_b},
		{"%u", write_uns}, {"%o", write_oct}, {"%x", write_x},
		{"%X", write_hex}, {"%S", write_s}
			};
	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 10;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
