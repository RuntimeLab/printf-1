#include "main.h"

int printf_octal(unsigned int num, int count_of_printed) {
    int oct[100], i = 0, j;
    while (num != 0) {
        int remainder = num % 8;
        oct[i] = 48 + remainder;
        i++;
        num /= 8;
    }
    if (i == 0) {
        putchar('0');
        count_of_printed++;
    } else {
        for (j = i - 1; j >= 0; j--) {
            putchar(oct[j]);
            count_of_printed++;
        }
    }
    return count_of_printed;
}
