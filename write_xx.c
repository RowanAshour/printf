#include "main.h"

/**
 * write_hex_extra - prints a hexadecimal number.
 * @num: number to print.
 * Return: counter.
 */
int write_hex_extra(unsigned long int num)
{
	long int index;
	long int *hexArray;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	hexArray = malloc(counter * sizeof(long int));

	for (index = 0; index < counter; index++)
	{
		hexArray[index] = temp % 16;
		temp = temp / 16;
	}
	for (index = counter - 1; index >= 0; index--)
	{
		if (hexArray[index] > 9)
			hexArray[index] = hexArray[index] + 39;
		_putchar(hexArray[index] + '0');
	}
	free(hexArray);
	return (counter);
}

