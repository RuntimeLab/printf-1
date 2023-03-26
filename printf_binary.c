#include "main.h"

int printf_binary(unsigned int num, int printed) {
    if (num == 0) {
        _putchar('0');
        printed++;
        return printed;
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
        _putchar('0' + binary[i]);
        printed++;
    }

    return (printed);
}
