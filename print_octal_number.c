#include "main.h"

/**
 * print_oct - prints an octal number.
 * @lot: list arguments.
 * Return: returns a counter.
 */
int print_oct(va_list lot)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(lot, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_print(array[i] + '0');
	}
	free(array);
	return (counter);
}
