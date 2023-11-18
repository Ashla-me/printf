#include "main.h"

/**
 * print_bin - prints binary number.
 * @lot: list of arguements.
 * Return: returns integer
 */
int print_bin(va_list lot)
{
int start = 0;
int count = 0;
int i, a = 1, r;
unsigned int num = va_arg(lot, unsigned int);
unsigned int p;

for (i = 0; i < 32; i++)
{
p = ((a << (31 - i)) & num);
if (p >> (31 - i))
start = 1;
if (start)
{
r = p >> (31 - i);
_print(r + 48);
count++;
}
}
if (count == 0)
{
count++;
_print('0');
}
return (count);
}
