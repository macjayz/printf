#include "main.h"
#include <unistd.h>

/**
* print_char - Entry point to printing characters
* @args: receives va_list argument
*
*Return: int
*/

int print_char(va_list args)
{
char c = (char)va_arg(args, int);
int count = 0;

if (c)
{
count = write(1, &c, 1);
return (count);
}

return (0);
}



