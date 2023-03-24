#include "main.h"

int print_string(va_list args, int count_of_printed) {
    char* str = va_arg(args, char*);
    int i = 0;
    while (str[i]) {
        if ((str[i] > 0 && str[i] < 32) || str[i] >= 127) {
            char hex[3];
            hex[0] = '\\';
            hex[1] = 'x';
            int val = str[i];
            hex[2] = (val / 16) < 10 ? (val / 16) + '0' : (val / 16) - 10 + 'A';
            hex[3] = (val % 16) < 10 ? (val % 16) + '0' : (val % 16) - 10 + 'A';
            write(1, hex, 4);
            count_of_printed += 4;
        }
        else {
            write(1, &str[i], 1);
            count_of_printed++;
        }
        i++;
    }
    return count_of_printed;
}

