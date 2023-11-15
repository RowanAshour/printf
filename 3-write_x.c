#include "main.h"

/**
 * write_x - prints a hexadecimal number.
 * @args: arguments.
 * Return: counter.
 */
int write_x(va_list args)
{
	int i;
	int *digits_array;
	int count = 0;
	unsigned int number = va_arg(args, unsigned int);
	unsigned int temp = number;

	/* Count the number of digits in the hexadecimal representation */
	while (number / 16 != 0)
	{
		number /= 16;
		count++;
	}
	count++;

	/* Allocate memory for an array to store the digits */
	digits_array = malloc(count * sizeof(int));

	/* Store the digits in the array */
	for (i = 0; i < count; i++)
	{
		digits_array[i] = temp % 16;
		temp /= 16;
	}

	/* Print the hexadecimal number */
	for (i = count - 1; i >= 0; i--)
	{
		if (digits_array[i] > 9)
			digits_array[i] = digits_array[i] + 39;
		_putchar(digits_array[i] + '0');
	}

	/* Free the allocated memory */
	free(digits_array);

	return (count);
}

