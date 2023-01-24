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
	int i = 0, value = 0;
	int count __attribute__((unused));
	va_list args;
	int (*f)(va_list);

	count = 0;
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue;
		}
		if (format[i] == '%')
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

