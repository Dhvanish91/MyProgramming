#include<stdio.h>
#include<string.h>

int main()
{

char a[100],b[100];
int i = 0;
printf("Enter the name : ");
scanf("%s",a);

for(i = 0; a[i]; b[i] = a[i], i++);
printf("\nAfter copying string : %s\n",b);




}
