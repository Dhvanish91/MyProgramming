#include <stdio.h>

int main()
{

	int num = 0;
	int i = 0;
	int bit = 0;
	int position = 0;

	printf("Entert the number you want to see the binary : ");
	scanf("%d",&num);

	for(i = 31; i >= 0; i--)
	{
		if(num&1<<i)
			printf("1");
		else
			printf("0");
	}

	printf("\nChoose the option :\n1)Set Bit\n2)Clear Bit\n");
	scanf("%d",&bit);
	printf("\nEnter the position of bit you want to set/clear \n");
	scanf("%d",&position);

	if(bit == 1)
	{
		num = num|1<<position;
	}
	else if(bit == 2)
	{
		num = num&(~(1<<position));
		//num = (num << position) & 0;		
	}
	else
	{
		printf("Unknown Option Choose\n");
	}

	printf("After choosing option result is : \n");


	for(i = 31; i >= 0; i--)
	{
		if(num&1<<i)
			printf("1");
		else
			printf("0");
	}

	printf("\n");
	return 0;
}
