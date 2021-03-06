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
int print_percent(va_list ap __attribute__((unused)));



#endif
