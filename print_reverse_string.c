#include "main.h"

/**
 * print_revs - function that prints a string in reverse
 * @lot: list of arguements
 *
 * Return: string
 */
int print_revs(va_list lot)
{
	char *s = va_arg(lot, char*);
	int i;
	int v = 0;

	if (s == NULL)
		s = "(null)";
	while (s[v] != '\0')
		v++;
	for (i = v - 1; i >= 0; i--)
		_print(s[i]);
	return (v);
}
