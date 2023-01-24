#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - prints a string in a formatted way
 * @format: string to print (char *)
 * @...: variadic parameters (unknown)
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, value = 0;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);
	while (format[i] != NULL && format[i])
	{
		if (format[i] != '%' && format[i] != '\0')
		{
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue;
		}
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count = count + value;
				i = i + 2;
				continue;
			}
			else
			{
				value = write(1, "%", 1);
				count = count + value;
			i++;
			continue;
			}
			i += 2;
		} i++;
	}
	va_end(args);
	return (count);
}

