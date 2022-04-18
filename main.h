#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _putstring(char *s);
int _printf(const char *format, ...);
int no_struct(char c, int count, va_list argu);
int print_number(int n);

#endif
