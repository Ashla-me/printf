#include "main.h"
/**
 * print_char - funtion thats prints a character
 * @lot: list of arguments
 * Return: returns the number of characters
 */

int print_char(va_list lot)
{
	char s;

	s = va_arg(lot, int);
	_print(s);
	return (1);
}
