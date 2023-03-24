#include "main.h"

int printf_binary(unsigned int num, int count_of_printed) {
    if (num == 0) {
        putchar('0');
        count_of_printed++;
        return count_of_printed;
    }

    int binary[32] = {0};
    int i = 0;

    // Convert the number to binary
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    // Print the binary digits from right to left
    while (i > 0) {
        i--;
        putchar('0' + binary[i]);
        count_of_printed++;
    }

    return count_of_printed;
}
