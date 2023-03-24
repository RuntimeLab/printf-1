#include "main.h"


int _printf(const char *format, ...)
{
    va_list args;
    int count_of_printed = 0;

    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;

            // Handle escape sequence %%
            if (*format == '%') {
                putchar('%');
                count_of_printed++;
                format++;
                continue;
            }

            // Handle character conversion specifier %c
            if (*format == 'c') {
                count_of_printed = print_char(args, count_of_printed);
                format++;
                continue;
            }

            // Handle string conversion specifier %s
            if (*format == 's') {
                count_of_printed = print_string(args, count_of_printed);
                format++;
                continue;
            }

            // Handle integer conversion specifiers %d and %i
            if (*format == 'd' || *format == 'i') {
                count_of_printed = print_integer(args, count_of_printed);
                format++;
                continue;
            }
            
            // Handle integer conversion specifiers %b
            if (*format == 'b') {
                count_of_printed = print_binary(va_arg(args, unsigned int), count_of_printed);
                format++;
                continue;
            }
        }

        // Handle regular characters
        putchar(*format);
        count_of_printed++;
        format++;
    }

    va_end(args);

    return count_of_printed;
}
