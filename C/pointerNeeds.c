#include <stdio.h>

int main()
{

const int i = 10;
int *p;
//int i = 10;
p = &i;
//printf("Value increased : %d\n",++i);
printf("P = %d\n",*p);
(*p)++;
printf("After pointer incresed I value : %d\n",i);


}
