int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;

            // Handle escape sequence %%
            if (*format == '%') {
                putchar('%');
                count++;
                format++;
                continue;
            }

            // Handle character conversion specifier %c
            if (*format == 'c') {
                count = print_char(args, count);
                format++;
                continue;
            }

            // Handle string conversion specifier %s
            if (*format == 's') {
                count = print_string(args, count);
                format++;
                continue;
            }

            // Handle integer conversion specifiers %d and %i
            if (*format == 'd' || *format == 'i') {
                count = print_integer(args, count);
                format++;
                continue;
            }
            
            // Handle integer conversion specifiers %b
            if (*format == 'b') {
                count = print_binary(args, count);
                format++;
                continue;
            }
        }

        // Handle regular characters
        putchar(*format);
        count++;
        format++;
    }

    va_end(args);

    return count;
}
