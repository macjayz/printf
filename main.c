#include <unistd.h>
#include "main.h"
#include <stdio.h>

int main(void)
{
int st_return;
int ct_return;

write(1,"STANDARD\n",9); 
st_return = printf("i printed %d characters\n", 1);
printf("%d\n", st_return);

write(1, "______________\n",15);

write(1, "CUSTOM\n",7);
ct_return = _printf("i printed %d characters\n", 1);
printf("%d\n", ct_return);

}
