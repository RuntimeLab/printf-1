#include "main.h"

/**
 * printf_percent - prints %
 * @format: format
 * @pa: va_list
 * Return: number of characters printed
 */
int printf_percent(char *format, va_list pa)
{
	(void)format;
	(void)pa;
	_putchar('%');
	return (1);
}
