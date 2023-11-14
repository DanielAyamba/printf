#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct format
{
	char *id;
	int (*f)();
}form;
int _putchar(char c);
int _printf(const char *format, ...);
int print_chars(va_list vals);
int printf_string(va_list vals);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int printf_int(va_list vals);
int printf_deci(va_list vals);
int print_bin(va_list vals);
int printf_unsigned(va_list vals);
int print_octal(va_list args);
int print_hexa(va_list val);
int print_hexal(va_list args);
int print_HEX_extra(unsigned long int num);
int print_excl(va_list args);
int print_pointer(va_list val);
int print_rev(va_list args);
int print_rot13(va_list args);
#endif
