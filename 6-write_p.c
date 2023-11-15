#include "main.h"

/**
 * write_p - prints an hexdecimal number.
 * @val: arguments.
 * Return: counter.
 */
int write_p(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int n;
	int i;
	int j;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			_putchar(s[j]);
		}
		return (j);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('n');
	y = write_hex_extra(n);
	return (i + 2);
}
