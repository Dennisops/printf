#include <stdarg.h>
#include "main.h"
#include <stdlib.h>



/**
 * _printf - produces output accrding to format
 * @format: character string composed of zero or more directives.
 *
 * Return:  the number of characters printed (excluding the null byte used * to end output to strings)
 */


int (*get_op(const char c))(va_list)
{
	int i = 0;

	flags_p fp[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent}
	};
	while (i < 3)
	{
		if (c == fp[i].c[0])
		{
			return (fp[i].f);
		}
		i++;
	}
	return (0);
}


int _printf(const char *format, ...)
{
	va_list ap;
	int sum = 0;
	int i = 0;
	int (*func)(va_list);

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			func = get_op(format[i + 1]);
			func(ap);
			//increment i
			i += 2;
			continue;
		}
		_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (sum);
}


