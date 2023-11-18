#include "main.h"
/**
 * print_rot13 - convert to rot13
 * @lot: list of arguments
 * Return: counter
 *
 */
int print_rot13(va_list lot)
{
int i, j, counter = 0;
int k = 0;
char s = va_arg(lot, char);
char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

if (s == NULL)
s = "(null)";
for (i = 0; s[i]; i++)
{
k = 0;
for (j = 0; a[j] && !k; j++)
{
if (s[i] == a[j])
{
_print(b[j]);
counter++;
k = 1;
}
}
if (!k)
{
_print(s[i]);
counter++;
}
}
return (counter);
}
