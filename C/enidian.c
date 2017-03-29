#include <stdio.h>

int main()
{
int i = 10;

char *ptr = &i;

if(*ptr == 10)
printf("Littile Eniddian\n");
else
printf("Big Eniddian\n");

return 0;
}
