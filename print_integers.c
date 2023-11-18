#include "main.h"
/**
 * print_i - prints integer
 * @lot: list of argument
 * Return: integer
 */
int print_i(va_list lot)
{
	int n = va_arg(lot, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
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

/**
 * print_d - prints integers
 * @lot: list of argument
 * Return: integer
 */

int print_d(va_list args)
{
	int n = va_arg(lot, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;	

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
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
