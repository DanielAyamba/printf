#include "main.h"
/**
 * print_chars - print characters to stdout
 *@vals:arguments
 *Return:return 1
 */
int print_chars(va_list vals)
{
	char str;
	str = va_arg(vals, int);
	_putchar(str);
	return (1);
}
