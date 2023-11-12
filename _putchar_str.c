#include "main.h"
/**
 * printf_string - prints a string to stdout
 * @vals:argument
 * Return:return 1
 */
int printf_string(va_list vals)
{
	int a, len;
	char *str;

	str = va_arg(vals, char *);
	if (str == NULL)
	{
	str = "(NULL)";
		len = _strlen(str);
	for (a = 0; a < len; a++)
		_putchar(str[a]);
	return (len);
	}
	else
	{
	len = _strlen(str);
	for (a = 0; a < len; a++)
		_putchar(str[a]);
	return (len);
	}
}
