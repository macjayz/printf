#include "main.h"
#include <stdarg.h>

/**
* print_cent - Checks for % symbol in _print func
*
*@args: receives va_list argument type
*Return: int
*/

int print_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}
