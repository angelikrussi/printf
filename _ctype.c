#include "holberton.h"
/**
 * *_ctype - struct of format types.
 * @argv: bring the format arguments.
 * @argc: position of each argument.
 * Return: 0.
 */

int (*_ctype(const char *argv, int argc))(va_list)
{
	/* argument list of struct_format structure */
	s_printer printers[] = {
		/* first column ("") is the format and the second*/
		/* is the list of functions */
		{"c", p_char},
		{"s", p_string},
		{"d", p_int},
		{"i", p_int},
		{NULL, NULL},
	};

/* int i is a counter */
	int k;
	/* for i that starts at 0; until list in position i is */
	/* part of args and be other than null; i increases one by one */

	for (k = 0; printer[k].arg != NULL; k++)
	{
		/* for i that starts at 0; until list in position i is*/
		/* part of args and be other than null; i increases one by one*/

		if (printer[k].arg[0] == argv[argc])
		{
			/* returns list in position i that is part of func */
			/*  which is the list of  functions */
			return (printer[k].f);
		}
	}
	/* if it does not meet the previous conditions, it returns NULL */
	return (NULL);
}
