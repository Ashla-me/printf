#include "main.h"

/**
 * print_HEX - prints an hexgecimal number.
 * @lot: arguments.
 * Return: counter.
 */
int print_HEX(va_list lot)
{
	int i;
	int *array;
	int counter = 0;ZZ
		unsigned int num = va_arg(lot, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));


	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{print
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_print(array[i] + '0');
	}
	free(array);
												return (counter);
}
