#include "holberton.h"

/**
 * printf_c - prints a char.
 * @pa: format of char.
 * @format: format
 * Return: number char for printf.
 */
int printf_c(char *format, va_list pa)
{
	(void)format;
	_putchar(va_arg(pa, int));
	return (1);
}
