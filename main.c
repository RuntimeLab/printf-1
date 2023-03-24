#include "main.h"

int main() {
    int number = 42;
    char *string = "Hello my name is Antony Muga!";
    _printf("a = %d\n", number);  // Output: a = 42
    _printf("s = %s\n", string);  // Output: s = Hello, world!
    _printf("%%\n");         // Output: %
    _printf("c = %c\n", 'v');  // Output: c = x
    _printf("i = %i\n", 999);  // Output: i = -123
    _printf("My name is %s and I'm writing this project with %s who is %d years old and has %i cars and nickname %%", "Antony", "Oyengo", 25, "%");  // Output: i = -123
    return 0;
}
