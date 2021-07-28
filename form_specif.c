#include "holberton.h"

/**
 *pr_char - print type char characters
 *@listing: argument list
 *Return: Void
 */

int pr_char(va_list listing)
{
	_putchar(va_arg(listing, int));

	return (1);
}

/**
*pr_string  - print a character string
*@listing: argument list object type va_list
*Return: void
*/

int pr_string(va_list listing)

{

	/*declaration a pounter indicating*/
	  /* the start of the string */

	char *str;
	/* an int is declared for the counter */
	int i;

	/*valist = is the object of type va_list*/
	/* char * = This data type name to use*/

	str = va_arg(listing, char*); /*character type*/

	if (str == NULL)
	{
		; /*null*/
	}

/* for i equal to 0; while s in position i is*/
	/* other than \0; increase i one at a time */

	for (i = 0; str[i] != '\0'; i++)
	{

	/*passes to the function*/
	/*_putchar str at position i*/

		_putchar(str[i]);
	}
	return (i);
}


/**
 *counter - digit counter
 *@n: number
 *Return: Void
 */

int counter(unsigned int n)
{
	/* a counter variable is declared at 0 */
	int cont = 0;

	/* two positive int variables are declared */
	unsigned int x, y;

	/* if n (variable received by parameter) is different than 0 */
	if (n != 0)
	{
		/*divide by 10 and move to the right the comma 56/10 = 5,6 */
		y = (n / 10);

		/*deliver the last digit of the number 56 % 10 = 6 */
		x = (n % 10);

		/*recursively validates how many digits the number has */
		cont += counter(y);

		/* keeps count of the digits */
		cont++;

/** sends the function _putchar the value of x plus '0'*/
/* the '0' a single digit number in its respective ascii value*/

		_putchar(x + '0');

		/* returns the counter */
		return (cont);
	}

	/* if the above is not met, 0 */
	return (0);
}

/**
 *pr_int - print type integer characters
 *@listing: argument list
 *Return: void
 */

int pr_int(va_list listing)
{

	int a, b = 0;
	unsigned int i;

	a = va_arg(listing, int);

	if (a < 0)
	{
		_putchar('-');
		b = 1;
		i = a * (-1);
	}
	else
	{
		i = a;
	}

	if (i > 9)
	{
		return (b + counter(i));
	}

	_putchar(i + '0');
	return (1 + b);

}
