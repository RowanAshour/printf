#include "main.h"

/**
 * write_oct - prints an octal number.
 * @args: arguments.
 * Return: counter.
 */
int write_oct(va_list args)
{
	int i;
	int *digits_array;
	int count = 0;
	unsigned int number = va_arg(args, unsigned int);
	unsigned int temp = number;

	/* Count the number of digits in the octal representation */
	while (number / 8 != 0)
	{
		number /= 8;
		count++;
	}
	count++;

	/* Allocate memory for an array to store the digits */
	digits_array = malloc(count * sizeof(int));

	/* Store the digits in the array */
	for (i = 0; i < count; i++)
	{
		digits_array[i] = temp % 8;
		temp /= 8;
	}

	/* Print the octal number */
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(digits_array[i] + '0');
	}

	/* Free the allocated memory */
	free(digits_array);

	return (count);
}
