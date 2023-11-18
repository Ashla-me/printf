#ifndef Gogo
#define Gogo

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _print(char c);
int print_char(va_list c);
int print_37(void);
int print_str(va_list lot);
int print_hex(va_list lot);
int print_hex_again(unsigned long int num);
int print_bin(va_list lot);
int print_custom_string(va_list lot);
int print_unsigned_integer(va_list lot);
int print_revs(va_list lot);
int print_oct(va_list lot);
int print_pointer(va_list lot);
int print_d(va_list args);
int print_i(va_list lot);
int print_HEX_again(unsigned int num);
int print_HEX(va_list lot);
int print_rot13(va_list lot);
int *_strcpy(char *dest, char *src);
int _printf(const char *format, ...);

#endif
