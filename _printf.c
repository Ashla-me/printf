#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: retunrs the number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int count = 0, string_count = 0;
	va_list all;

	if (format == NULL)
	{
		return(-1);
	}

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
				count++;
			}
			else if (*format == 's')
			{	char *str = va_arg(all, char *);

				while (*str != '\0')
				{
					_print(*str);
					str++;
					string_count++;
				}
				_print(*str);
				count += string_count;
			}
			else if (*format == '%')
			{	
				_print('%');
				count++;
			}
			else if (*format == 'd')
			{
				int number = va_arg(all, int);
				_print(number);
				count++;

			}
			else if (*format == 'i')
			{
				int numeral = va_arg(all, int);
				_print(numeral);
			}
			
		}
		else
		{
			_print(*format);
			count++;
		}
		format++;
	}
	va_end(all);
	return (count);
}

