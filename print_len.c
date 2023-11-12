#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str:pointer to string
 * Return:return a
 */
int _strlen(char *str)
{
	int a;
	
	for (a = 0; str[a] != '\0'; a++)
		;
	return (a);
}
/**
 * _strlenc - returns the length of const pointer string
 * @str:pointer to a const string
 * Return:a
 */
int _strlenc(const char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	return (a);
}
