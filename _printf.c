#include "main.h"

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the formated string
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int count_of_printed = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count_of_printed = select_specifier(format, args, count_of_printed);
			format++;
		}
		else
		{
			putchar(*format);
			count_of_printed++;
			format++;
		}
	}
	va_end(args);
	return (count_of_printed);
}
