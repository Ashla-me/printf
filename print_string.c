#include "main.h"
/**
 * print_str - function that's prints strings
 * @lot: list of arguements
 * Return: returns the lenght of the string
 */

int print_str(va_list lot)
{
        char *s;
        int i, len;

        s = va_arg(lot, char*);

        if (s == NULL)
        {
                s = "(null)";
                len = strlen(s);

                for (i = 0; i < len; i++)
                {
                        _print(s[i]);
                }
                return (len);
        }

        else
        {
                len = strlen(s);

                for (i = 0; i < len; i++)
                {
                        _print(s[i]);
                }
                return (len);
        }
}
