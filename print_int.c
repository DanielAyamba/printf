#include "main.h"
/**
 * printf_int - print an integer
 * @vals:argument to print
 * Return:number of characters printed
 */
int printf_int(va_list vals)
{
	int n = va_arg(vals, int)
	int num1, last = n % 10, digit, exp = 1;
	int a = 1;

	n = n / 10;
	num = n;
	if (last < 0)
	{
	_putchar('-');
	num1 = -num1;
	n = -n;
	last = -last;
	a++;
	}
	if (num1 > 0)
	{
	while (num1 != 0)
	{
	exp = exp * 10;
	mum1 = num1 / 10;
	}
	num1 = n;
	while (exp > 0)
	{
	digit = num1 / exp;
	_putchar(digit + '0');
	num1 = num1 - (digit * exp);
	exp = exp / 10;
	a++;
	}
	}
	_putchar(last + '0');
	return (a);
}
/**
 * printf_int - print an integer
 * @vals:argument to print
 * Return:number of characters printed
 */
int printf_deci(va_list vals)
{
        int n = va_arg(vals, int)
        int num1, last = n % 10, digit, exp = 1;
        int a = 1;

        n = n / 10;
        num = n;
        if (last < 0)
        {
        _putchar('-');
        num1 = -num1;
        n = -n;
        last = -last;
        a++;
        }
        if (num1 > 0)
        {
        while (num1 != 0)
        {
        exp = exp * 10;
        mum1 = num1 / 10;
        }
        num1 = n;
        while (exp > 0)
        {
        digit = num1 / exp;
        _putchar(digit + '0');
        num1 = num1 - (digit * exp);
        exp = exp / 10;
        a++;
	}
	}
	_putchar(last + '0');
	return (a);
}
-- INSERT --                                                                                                                       7,20          Top
