#include "main.h"

int printf_pointer(va_list args, int printed) {
    void *ptr = va_arg(args, void *);
    char hex[16];
    int i, j;
    unsigned long int address = (unsigned long int)ptr;
    printed += print_string("0x");

    if (address == 0) {
        printed += print_char('0');
        return printed;
    }

    for (i = 0; address != 0; i++) {
        int remainder = address % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder - 10 + 'a';
        }
        address /= 16;
    }

    for (j = i - 1; j >= 0; j--) {
        printed += print_char(hex[j]);
    }

    return printed;
}

}
