#include <stdarg.h>
#include "main.h"
#include <stdlib.h>



/**
 * _printf - produces output accrding to format
 * @format: character string composed of zero or more directives.
 *
 * Return: number of characters printed
 */


int _printf(const char *format, ...)
{
	int sum = 0, i = 0;

	while (format[i])
	{
		if (format[i] != '\0')
		{
			printf("%c", format[i]);
			sum++;
			i++;
		}
	}

	return (sum);
}
