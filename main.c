#include <unistd.h>
#include "main.h"
#include <stdio.h>

int main(void)
{

int len, len2;


    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");


    printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");

    printf("String:[%s]\n", "I am a string !");

    len = _printf("Percent:[%%]\n");

    len2 = printf("Percent:[%%]\n");

	printf("Len:[%d]\n", len);

    printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");

    printf("Unknown:[%r]\n");

    return (0);

}
