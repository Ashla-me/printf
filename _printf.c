#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: retunrs the number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list all;

	va_start(all, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{
				char character = va_arg(all, int);

				_print(character);
				i++;
			}
			else if (*format == 's')
			{	char *str = va_arg(all, char *);

				while (*str != '\0')
				{
					_print(*str);
					str++;
					i++;
				}
			}
			else if (*format == '%')
			{	_print('%');
				i++;
			}
			else if (*format == 'd')
			{
				int number = va_arg(all, int);
				_print(number);
				i += _print(number);
			}
			else if (*format == 'i')
			{
				int numeral = va_arg(all, int);
				_print(numeral);
				i++;
			}
		}
		else
		{
			_print(*format);
			i++;
		}
		format++;
	}
	va_end(all);
	return (i);
}

