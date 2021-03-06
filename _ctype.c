#include "holberton.h"
/**
 * *ctype - struct of format types.
 * @argv: bring the format arguments.
 * @argc: position of each argument.
 * Return: 0.
 */

int (*ctype(const char *argv, int argc))(va_list)
{
	/* argument list of format structure */
	s_printer printers[] = {
		/* first column ("") is the format and the second*/
		/* is the list of functions */
		{"c", pr_char},
		{"s", pr_string},
		{"d", pr_int},
		{"i", pr_int},
		{NULL, NULL},
	};

/* int k is a counter */
	int k;
	/* for k that starts at 0; until list in position k is */
	/* part of args and be other than null; k increases one by one */

	for (k = 0; printers[k].arg != NULL; k++)
	{
		/* for k that starts at 0; until list in position k is*/
		/* part of args and be other than null; k increases one by one*/

		if (printers[k].arg[0] == argv[argc])
		{
			/* returns list in position k that is part of func */
			/*  which is the list of  functions */
			return (printers[k].f);
		}
	}
	/* if it does not meet the previous conditions, it returns NULL */
	return (NULL);
}
