#include "main.h"
/**
 * print_custom_string - prints customized string.
 * @lot: list of arguements
 * Return: returns an integer.
 */

int print_custom_string(va_list lot)
{
	char *s;
	int i, length = 0;
	int value;

	s = va_arg(lot, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_print('\\');
			_print('x');
			length = length + 2;
			value = s[i];
			if (value < 16)
			{
				_print('0');
				length++;
			}
			length = length + print_hex_again(value);
		}
		else
		{
			_print(s[i]);
			length++;
		}
	}
	return (length);
}
