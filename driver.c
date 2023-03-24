#include "main.h"

/**
 * driver - selector for type of fun.
 * @format: string.
 * Description: the function loops through the structs
 * selector[] ment of the struct.
 * Return: a pointer
 * structype selector - Struct
 */

int (*driver(char *format))(char *format, va_list)
{
int i;

structype selector[] = {
{"%c", printf_c},
{"%s", printf_s},
{"%d", printf_d},
{"%i", printf_d},
{"%%", printf_percent},
{"%x", printf_x},
{"%X", printf_X},
{"%o", printf_o},
{NULL, NULL}
};

if (format[1] == ' ' || format[1] == '\0')
return (NULL);
for (i = 0; selector[i].q; i++)
{
if (format[1] == selector[i].q[1])
return (selector[i].u);
}
return (NULL);
}
