#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
*print_str - Entry point to print strings
*@args: receives va_list argument
*Return: int
*/

int print_str(va_list args)
{
	int i;
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);

	while (str[i])
	{
		count = write(1, &str[i], 1);
		i = i + 1;
	}

	return (count);
}
