#include "main.h"

int print_integer(va_list args, int printed)
{
    int num = va_arg(args, int);
    int digits = 0;
    int temp = num;

    // Handle negative numbers
    if (num < 0) {
        printed += _putchar('-');
        num = -num;
        temp = num;
    }

    // Count the number of digits
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    // Print the digits in the correct order
    while (digits > 0) {
        int pow10 = 1;
        for (int i = 1; i < digits; i++) {
            pow10 *= 10;
        }
        int digit = num / pow10;
        printed += _putchar(digit + '0');
        num -= digit * pow10;
        digits--;
    }

    return (printed);
}
