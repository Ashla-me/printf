#include "main.h"

/**
 * print_pointer - prints an address of a data.
 * @val: arguments.
 * Return: counter.
 */
int print_pointer(va_list lot)
{
	void *ptr;
	char *str = "(nil)";
	long int x;
	int l;
	int i;	

	ptr = va_arg(lot, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i]; i++)
		{
			_print(str[i]);
		}
		return (i);
	}

	x = (unsigned long int)ptr;
	_print('0');
	_print('x');
	l = print_hex_again(x);
	return (l + 2);
}
