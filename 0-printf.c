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
	if (format[a] != '\0')
	{
	count += myputchar(format[a]);
	}
	else
	{
	switch (format[a + 1])
	{
	case 'c':
	count += myputchar(va_arg(print, int));
	a++;
	break;
	case 's':
      count += myputchar(va_arg(print, int));
      count += str_count;
      a++;
      break;
	case '%':
      count += myputchar('%');
      a++;
      break;
	default:
      break;
	}
	}
	}
	va_end(print);
	return (count);
}
