
#include <stdio.h>

int main()
{

int num = 0;
printf("Enter the number which you want to see the binary: ");
scanf("%d",&num);

for(int i = 31; i >= 0; i--)
{
if(num&1<<i)
printf("1");
else
printf("0");

}
printf("\n");
return 0;

}
