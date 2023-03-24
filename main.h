#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 *
 * Return: int
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;

int _putchar(char ch);
int _puts(char *string);
int printf_c(char *format, va_list);
int printf_s(char *format, va_list);
int (*driver(char *format))(char *format, va_list);
int _printf(char *format, ...);
int printf_d(char *format, va_list pa);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int printf_percent(char *format, va_list pa);
int printf_x(char *format, va_list);
int printf_X(char *format, va_list);
int printf_o(char *format, va_list);
int printf_u_int(char *format, va_list);
#endif
