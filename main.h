#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int print_char(va_list args, int count_of_printed);
int print_string(va_list args, int count_of_printed);
int print_integer(va_list args, int count_of_printed);
int print_argument(const char *format, va_list args, int count_of_printed);
int print_binary(unsigned int num, int count_of_printed);
int _printf(const char *format, ...);

#endif
