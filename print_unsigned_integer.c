#include "main.h"
/**
 * print_unsigned_integer - prints unsigned integer
 * @args: list of argument
 * Return: integer
 */
int print_unsigned_integer(va_list lot)
{
	unsigned int n = va_arg(lot, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;	

	if (last < 0)
	{
		_print('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_print(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_print(last + '0');

	return (i);
}
