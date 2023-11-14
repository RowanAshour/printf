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
	unsigned int number = va_arg(args, unsigned int);
	int current_digit, last_digit = number % 10, digit, exp = 1;
	int count = 1;

	number = number / 10;
	current_digit = number;

	if (last_digit < 0)
	{
		_putchar('-');
		current_digit = -current_digit;
		number = -number;
		last_digit = -last_digit;
		count++;
	}

	if (current_digit > 0)
	{
		while (current_digit / 10 != 0)
		{
			exp = exp * 10;
			current_digit = current_digit / 10;
		}

		current_digit = number;

		while (exp > 0)
		{
			digit = current_digit / exp;
			_putchar(digit + '0');
			current_digit = current_digit - (digit * exp);
			exp = exp / 10;
			count++;
		}
	}

	_putchar(last_digit + '0');

	return (count);
}

