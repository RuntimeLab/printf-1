#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int print_char(va_list args, int count);
int print_string(va_list args, int count);
int print_integer(va_list args, int count);
int _printf(const char *format, ...);

#endif
