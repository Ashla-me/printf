#ifndef Gogo
#define Gogo

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

int _print(char c);
int print_char(va_list c);
int print_37(void);
int print_str(va_list lot);
int print_hex(va_list lot);
int print_hex_again(unsigned int num);
int print_bin(va_list lot);
int print_custom_string(va_list lot);
int print_unsigned_integer(va_list lot);
int print_revs(va_list lot);

int _printf(const char *format, ...);
#endif
