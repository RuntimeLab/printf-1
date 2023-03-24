#include "main.h"

/**
 * printf_s- print str.
 * @pa: gtgtg
 * @format: format str.
 * Return: number str for print.
 */
int printf_s(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int contador;
	(void)format;

	if (string == NULL)
		string = "(null)";
	contador = _puts(string);
	return (contador);
}
