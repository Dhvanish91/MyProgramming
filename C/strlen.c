#include <stdio.h>
#include <string.h>
int main()
{
char a[10];
int len = 0;

printf("Enter the string :");
scanf("%s",a);

for(len = 0; a[len]; len++);

printf("My Calculation of String Length:%d\n",len);

len = strlen(a);
printf("Libary Function String length result : %d\n",len);


}
