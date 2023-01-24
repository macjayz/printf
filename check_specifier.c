#include <stdarg.h>
#include "main.h"

/**
*check_specifier - this function checks the
*character after the % symbol if its a valid
*specifier.
*@format: accepts a string
*Return: int
*/

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[5] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{NULL, NULL}};
	
	for (i = 0; my_array[i].t != NULL; i++)
	{
		
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}

	return (NULL);
}
