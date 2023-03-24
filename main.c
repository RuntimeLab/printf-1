#include "main.h"

int main() {
    int number = 42;
    char *string = "Hello my name is Antony Oyengo!";
    _printf("This is a number: = %d\n", number);  // Output: a = 42
    _printf("This is a string: = %s\n", string);  // Output: s = Hello, world!
    _printf("This is a percentage sigh: %%\n");         // Output: %
    _printf("This is a character: %c\n", 'v');  // Output: c = x
    _printf("This is another number: %i\n", 999);  // Output: i = -123
    _printf("Binary symbol number: %b My name is %s and I'm writing this project with %s who is %d years old and has %i cars and nickname %%", 44, "Antony", "Oyengo", 25, 28, "%");  // Output: i = -123
    return 0;
}
