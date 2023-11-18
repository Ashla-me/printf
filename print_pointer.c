#include "main.h"

/**
 * print_pointer - prints an address of a data.
 * @val: arguments.
 * Return: counter.
 */
int print_pointer(va_list lot)
{
	void *p;
	char *str = "(nil)";
	long int x;
	int l;
	int i;	

	ptr = va_arg(val, void*);
	if (ptr == NULL)
	{
		for (i = 0; s[i]; i++)
		{
			_print(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_print('0');
	_print('x');
	l = print_hex_again(x);
	return (y + 2);
}
