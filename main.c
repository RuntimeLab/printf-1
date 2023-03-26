#include "main.h"

int main()
{
	int number = 42;
	char *string = "Hello my name is Antony Oyengo!";
	unsigned int my_hex = 0x126AFC;
	unsigned int my_unsigned = 1234567890;
       	unsigned int my_octal = 01234567;
	char gender[] = "Male";

	_printf("This is a number: = %d\n", number);
	_printf("This is a string: = %s\n", string);
	_printf("This is a percentage sigh: %%\n");
	_printf("This is a character: %c\n", 'v');
	_printf("This is another number: %i\n", 999);
	_printf("This is your hex: %x\n", my_hex);
	_printf("This is your octal: %o\n", my_octal);
	_printf("This is your unsigned number: %u\n", my_unsigned);
	_printf("Hello the Oyengo. Or should I say %r!\n", "Oyengo");
	_printf("This is your pointer: %p\n", &gender);
	_printf("Binary symbol number: %b My name is %s and I'm writing this project with %s who is %d years old and has %i cars and nickname %%\n", 44, "Antony", "Oyengo", 25, 28, "%");
	return (0);
}
