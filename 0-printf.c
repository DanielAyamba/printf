#include "main.h"
/**
 * _printf - print to the stdout formatted text
 *
 * @format:format specifier
 *
 * Return:returns the number of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int a, count = 0, str_count = 0;
	va_list print;

	va_start(print, format);
	for (a = 0; format[a] != '\0'; a++)
	{
	if (format[a] != '%')
	{
	myputchar(format[a]);
	}
	else if (format[a + 1] == 'c')
	{
	myputchar(va_arg(print, int));
	a++;
	}
	else if (format[a + 1] == 's')
	{
	str_count = myputs(va_arg(print, char *));
	a++;
	count += (str_count - 1);
	}
	else if (format[a + 1] == '%')
	{
	myputchar('%');
	}
	count++;
	}
	va_end(print);
	return (count);
}
