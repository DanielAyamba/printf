#include "main.h"
/**
 * myputs - prints a string to stdout
 * @c:input string
 * Return: 1
 */
int myputs(char *c)
{	int count;

	if (c)
	{
	for (count = 0; c[count] != '\0'; count++)
	{
	myputchar(c[count]);
	}
	}
	return (count);
}
