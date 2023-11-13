#include <stddef.h>
#include <unistd.h>
#include "main.h"

/**
 * write_char - Writes a single character to stdout
 * @c: The character to be written
 * @count: Pointer to the count of characters written
 */
static void write_char(char c, int *count)
{
	_putchar(c);
	(*count)++;
}

/**
 * write_str - Writes a string to stdout
 * @str: The string to be written
 * @count: Pointer to the count of characters written
 */
static void write_str(const char *str, int *count)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		(*count)++;
	}
}

/**
 * handle_format_specifier - Handles a format specifier
 * @specifier: The format specifier to handle
 * @args: Variable arguments
 * @count: Pointer to the count of characters written
 */
static void handle_format_specifier(char specifier, va_list args, int *count)
{
	char c;
	char *str;

	switch (specifier)
	{
		case 'c':
			c = (char) va_arg(args, int);
			write_char(c, count);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(null)";
			write_str(str, count);
			break;
		case '%':
			write_char('%', count);
			break;
		default:
			write_char('%', count);
			write_char(specifier, count);
			break;
	}
}

/**
 * _printf - Custom printf function
 * @format: Format string with conversion specifiers
 * @...: Variable number of arguments to be printed
 *
 * Return: Number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;  /* Move to the character after '%' */
			handle_format_specifier(*ptr, args, &count);
		}
		else
		{
			write_char(*ptr, &count);
		}
	}

	va_end(args);

	return (count);
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

