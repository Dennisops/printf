#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _printf -produces output according to format
 * @format:string containing characters and specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */

int _printf(const char *format, ...)
{
	int i = 0, var = 0;
	va_list v_ls;
	buffer *buf;

	buf = buf_new();
	if (buf == NULL)
		return (-1);
	if (format == NULL)
		return (-1);
	va_start(v_ls, format);
	while (format[i])
	{
		buf_wr(buf);
		if (format[i] == '%')
		{
			var = opid(buf, v_ls, format, i);
			if (var < 0)
			{
				i = var;
				break;
			}
			i += var;
			continue;
		}
		buf->str[buf->index] = format[i];
		buf_inc(buf);
		i++;
	}
	buf_write(buf);
	if (var >= 0)
		i = buf->overflow;
	buf_end(buf);
	va_end(v_ls);
	return (i);
}
