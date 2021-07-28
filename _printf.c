#include "holberton.h"
/**
 * _printf - function.
 * @format: list of arguments passed
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	va_list listing;
	unsigned int i = 0, conta = 0;

	va_start(listing, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				conta++;
				i++;
			}
			else if (ctype(format, i + 1 != '\0'))
			{
				conta += ctype(format, i + 1)(listing);
				i++;
			}
			else
			{
				_putchar(format[i]);
				conta++;
			}
		}
		else
		{
			_putchar(format[i]);
			conta++;
		}
	}
	va_end(listing);
	return (conta);
}
