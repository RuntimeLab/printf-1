#include "main.h"

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count_of_printed = 0;

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            count_of_printed = print_argument(format, args, count_of_printed);
            format++;
        } else {
            putchar(*format);
            count_of_printed++;
            format++;
        }
    }

    va_end(args);
    return count_of_printed;
}

int print_argument(const char *format, va_list args, int count_of_printed) {
    switch (*format) {
        case 'd':
        case 'i':
            count_of_printed = print_integer(va_arg(args, int), count_of_printed);
            break;
        case 'c':
            putchar(va_arg(args, int));
            count_of_printed++;
            break;
        case 's':
            count_of_printed = print_string(va_arg(args, char *), count_of_printed);
            break;
        case '%':
            putchar('%');
            count_of_printed++;
            break;
        case 'b':
            count_of_printed = print_binary(va_arg(args, unsigned int), count_of_printed);
            break;
        default:
            // Unknown conversion specifier - ignore it
            break;
    }
    return count_of_printed;
}





