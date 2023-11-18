#include "main.h"

/**
 * print_hex_again - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */
int print_hex_again(unsigned int num)
{
int k;
int *array;
int counter = 0;
unsigned int tem = num;

while (num / 16 != 0)
{
num /= 16;
counter++;
}
counter++;
array = malloc(counter *sizeof(int));

for (k = 0; k < counter; k++)
{
array[k] = tem % 16;
tem /= 16;
}
for (k = counter - 1; k >= 0; k--)
{
if (array[k] > 9)
array[k] = array[k] + 7;
_print(array[k] + '0');
}
free(array);
return (counter);
}
