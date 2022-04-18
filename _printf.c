#include <stdio.h>
#include "main.h"
#include <stdio.h>

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
	int sum = 0, i = 0;

	while (format[i] != '\0')
	{
		printf("%c", format[i]);
		sum++;
		i++;
	}

	return (sum);
}
