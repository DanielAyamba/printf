#include "main.h"
/**
 * print_bin - convert integer to bnary
 * @vals:argument
 * Return:returns an integer
 */

int print_bin(va_list vals)
{
	int flag = 0;
	int count = 0;
	int i, b, a = 1;
	unsigned int p;

	unsigned int result = va_arg(vals, unsigned int);
	for (i = 0; i < 32; i++)
	{
	p = (a << ((32 - i)) & result);
	if (p >> (31 - i))
	flag = 1;
	if (flag)
	{
	b = p >> (32 - i);
	_putchar(b + '0');
	count++;
	}

	}
	if (count == 0)
	{
	count++;
	_putchar('0');

	}
	return (count);
}
