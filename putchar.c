#include "main.h"

/**
 * _putchar - prints a character
 * @c: char to be printed
 * Return: charactre
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
