#include <stdio.h>

int main()
{

int a[5];
int i = 0;
int num = 0;
int odd = 0 , even = 0, total = 0;

for (i = 0; i < 5; i++)
{
printf("Enter the number :");
scanf("%d",&a[i]);
}

for (i = 0; i<5; i++)
{
if(i%2)
odd+=a[i];
else
even+=a[i];
}


printf("odd : %dand even : %d\n",odd,even);
printf("Total : %d\n",total = odd + even);
return 0;
}
