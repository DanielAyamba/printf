#include "main.h"
/**
 * myputchar - prints a character to stdout
 * @c:character input
 * Return: 1
 */
int myputchar(char c)
{
	return (write(1, &c, 1));
}
