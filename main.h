#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int _putchar(char c);
int _puts(char *str);

/**
 * struct flags_printf
 * @c: flag string
 * @f: pointer to func
 */

typedef struct flags_printf
{
	char *c;
	int (*f)(va_list);
} flags_p;


#endif
