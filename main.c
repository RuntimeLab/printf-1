#include "main.h"

int main() {
    int a = 42;
    char *s = "Hello, world!";
    _printf("a = %d\n", a);  // Output: a = 42
    _printf("s = %s\n", s);  // Output: s = Hello, world!
    _printf("%%\n");         // Output: %
    _printf("c = %c\n", 'x');  // Output: c = x
    _printf("i = %i\n", 123);  // Output: i = -123
    return 0;
}
