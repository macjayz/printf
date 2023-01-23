#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "check_specifier.c"
#include "print_char.c"
#include "print_str.c"
#include "print_cent.c"
#include "print_int.c"
#include "print_dec.c"

/**
* _printf - Entry point to printf replica function
*@format: receives char pointer argument
*Return: int
*
*/

int _printf(const char *format, ...)
{
	int i, count, value = 0;
	va_list args;

	va_start(args, format);
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
while (format[i])
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
if (format[i + 1] == '\0')
{
break;
}
if (format[i + 1] != '\0')
{
value = write(1, &format[i + 1], 1);
count = count + value;
i = i + 2;
continue;
}
}
}
	return (count);
}
