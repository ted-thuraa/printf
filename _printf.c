#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

#define STDOUT 1

/**
 * _printf - produces output according to a format
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	char c, out, *s;

	va_list ap;

	va_start(ap, format);

	while (*format)
	{
		switch (*format++)
		{
			case 's':
				s = va_arg(ap, char *);
				out = (write(STDOUT, s, strlen(s)));
				break;
			case 'c':
				c = (char) va_arg(ap, int);
				out = (write(STDOUT, &c, 1));
				break;
			case '%':
				out = ('%');
				break;
		}
	}
	va_end(ap);
	return (out);
}
