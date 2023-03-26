#include "main.h"

int printf_pointer(va_list args, int printed) {
    void *ptr = va_arg(args, void*);
    unsigned long long num = (unsigned long long) ptr;
    int digits = 0;
    unsigned long long temp = num;

    // Count the number of digits in the hexadecimal representation of the pointer
    while (temp != 0) {
        digits++;
        temp /= 16;
    }

    // Print the '0x' prefix
    printed += _putchar('0');
    printed += _putchar('x');

    // Print the hexadecimal representation of the pointer
    if (num == 0) {
        printed += _putchar('0');
    } else {
        char hex_digits[16] = "0123456789abcdef";
        char hex[digits];

        // Convert the pointer value to hexadecimal
        for (int i = digits - 1; i >= 0; i--) {
            int digit = num % 16;
            hex[i] = hex_digits[digit];
            num /= 16;
        }

        // Print the hexadecimal digits
        for (int i = 0; i < digits; i++) {
            printed += _putchar(hex[i]);
        }
    }

    return printed;
}
