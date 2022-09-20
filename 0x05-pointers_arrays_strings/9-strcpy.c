#include "main.h"

/**
 * char *_strcpy - a funtion that copies the string pointed to by src
 * @dest: destrination of the string
 * @src: source of the string
 * Return; STRING
 */
char *_strcpy(char *dest, char *src)
{
	char *guard = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest = 0;
	}
	return (guard);
}
