#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct printer- Struct printer
 * @arg: arguments pointer
 * @f: The function associated
 */
typedef struct printer
{/*char form of argument*/
	char *arg;
	int (*f)(va_list);
}printer;

void _putchar(int);
int _printf(const char *format, ...);
int pr_char(va_list listing);
int pr_string(va_list listing);
int pr_int(va_list listing);
int (*_ctype(const char *argv, int argc))(va_list);
int counter(unsigned int n);

#endif /* HOLBERTON_H */
