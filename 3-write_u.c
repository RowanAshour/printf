#include "main.h"

/**
 * write_uns - print unsigned int
 *
 * @args: argument that prints
 *
 * Return: number of char
 */
int write_uns(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);
	int num, last = value % 10, digit, exp = 1;
	int count = 1;

	value = value / 10;
	num = value;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		value = -value;
		last = -last;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = value;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			count++;
		}
	}
	_putchar(last + '0');

	return (count);
}
