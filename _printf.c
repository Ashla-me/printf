#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: retunrs the number of characters printed
 */

int _printf(const char *format, ...)
{
	convert p[] = {
		{"%s", print_str}, {"%c", print_char},
		{"%%", print_37},
		{"%i", print_i}, {"%d", print_d}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsigned_integer},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_custom_string}, {"%p", print_pointer}
	};


	va_list lot;
	int i = 0, j, length = 0;

	va_start(lot, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(lot);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_print(format[i]);
		length++;
		i++;
	}
	va_end(lot);
	return (length);
}
