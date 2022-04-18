#include "main.h"

/**
 * _putstring - prints a string
 * @s: pointer passed to this
 * Return: string len
 */

int _putstring(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}
