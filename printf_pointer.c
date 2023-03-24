#include "main.h"

int print_pointer(va_list args, int count_of_printed)
{
    void *ptr = va_arg(args, void *);
    unsigned long int num = (unsigned long int) ptr;
    int digits = 0;
    int temp = num;
    putchar('0');
    putchar('x');
    count_of_printed += 2;
    while (temp != 0) {
        digits++;
        temp /= 16;
    }
    if (num == 0) {
        putchar('0');
        count_of_printed++;
    }
    else {
        char hex_digits[] = "0123456789abcdef";
        char buffer[digits];
        int i = digits - 1;
        while (num != 0) {
            buffer[i] = hex_digits[num % 16];
            num /= 16;
            i--;
        }
        for (i = 0; i < digits; i++) {
            putchar(buffer[i]);
            count_of_printed++;
        }
    }
    return count_of_printed;
}
