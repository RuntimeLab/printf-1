# Printf
Our first collaborative project at Holberton School, The printf project
is a Low-Level Programming project writen in C language.


## Table of Context
<!-- toc -->

- [Files](#Files)
- [change log](#change-log)
  * [0.0.1 - 2018-19-10](#001---2018-19-10)
- [Authors](#Authors)

<!-- tocstop -->
# Files

|          Goto          | Files                                          | Description                                                  |
| :--------------------: | :--------------------------------------------- | ------------------------------------------------------------ |
|      [📌](#_printf)      | [_printf.c](./printf.c)                         | Entry point for the `_printf`.                                |
|      [📌](#_putchar)      | [_putchar.c](./_putchar.c)                         | Custom implementation of the inbuilt `putchar`.                                |
|   [📌](#main)    | [main.c](./main.c)                 | Tests for `_printf` program.       |
|   [📌](#main.h)    | [main.h](./main.h)                 | Header file containing all prototypes for `_printf` program                    |
|   [📌](#man_3_printf)   | [man_3_printf](./man_3_printf)               | The man page for  `_printf` program                   |
| [📌](#printf_binary)  | [printf_binary.c](./printf_binary.c)         | Prints binary represetation using `%b` |
| [📌](#printf_char)  | [printf_char.c](./printf_char.c)         | Prints a single character using `%c` |
| [📌](#printf_hex)  | [printf_hex.c](./printf_hex.c)         | Prints hexadecimal represetation using `%x` and `%X`|
| [📌](#printf_integer)  | [printf_integer.c](./printf_integer.c)         | Prints an integer using `%d` and `%i` |
| [📌](#printf_octal)  | [printf_octal.c](./printf_octal.c)         | Prints octal represetation using `%o` |
| [📌](#printf_pointer)  | [printf_pointer.c](./printf_pointer.c)         | Prints a pointer using `%p` |
| [📌](#printf_reverse)  | [printf_reverse.c](./printf_reverse.c)         | Prints in reverse using `%r` |
| [📌](#printf_string)  | [printf_string.c](./printf_string.c)         | Prints a string suing `%s` |
| [📌](#printf_unsigned)  | [printf_unsigned.c](./printf_unsigned.c)         | Prints an unsigned integer using `%u` |




## Printf

file: [printf.c](./printf.c)

| Function | Details                                               |
| -------: | ----------------------------------------------------- |
|  _printf | prints any string with certain flags for modification |



[back to files](#Files)



## opid.c

file: [opid.c](./opid.c)


| Function | Details                                  |
| -------: | ---------------------------------------- |
|     opid | opid - scans src string for an operator. |



[back to files](#Files)

## buffer_int.c  

file: [buffer_int.c](./buffer_int.c)  


|   Function | Details                                                      |
| ---------: | ------------------------------------------------------------ |
|    buf_new | Function that create a `Buffer` `struct` at a default size of 1024 |
| buf_custom | Function for create a `Buffer` `struct` with a custom size   |
|    buf_end | frees `buffer` structure                                     |


[back to files](#Files)

## buffer_ops.c  

file: [buffer_ops.c](./buffer_ops.c)  


|    Function | Details                                    |
| ----------: | ------------------------------------------ |
|    buf_size | get the size                               |
|   buf_index | gets the current index of                  |
| buf_content | creates a copy of the buffer str field     |
|   buf_write | writes out the `buffer` string to `stdout` |
|      buf_wr | writes and reset the `buffer` string       |

[back to files](#Files)



## buffer_ops2.c 

file: [buffer_ops2.c](./buffer_ops2.c)  


| Function | Details                            |
| -------: | ---------------------------------- |
|  buf_inc | increment both index and overflow. |

[back to files](#Files)

## write_op_funcs.c 

file: [write_op_funcs.c](./write_op_funcs.c)


|   Function | Details                                      |
| ---------: | -------------------------------------------- |
| write_char | write a character to buffer                  |
|  write_str | writes a string to buffer                    |
|  write_mod | write a modulus symbol                       |
|  write_int | write integer to the buffer                  |
| append_num | Appends a number as an integer to the buffer |



[back to files](#Files)

## write_op2_funcs.c 

file: [write_op2_funcs.c](./write_op2_funcs.c)


|  Function | Details                    |
| --------: | -------------------------- |
| write_bin | convert a digit to binary. |



[back to files](#Files)


# change log

## 0.0.1 - 2018-19-10
- add Martin Branch
- Git flow initialized to this project.



# Authors

- Martin Smith - [Github](http://github.com/Ostoyae) , [Twitter](https://twitter.com/@_Ostoyae)
- Samie Azad - [Github](https://github.com/sazad
