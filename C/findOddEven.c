#include <stdio.h>

int main()
{

	int loop = 0;
	int i = 0;
	int num = 0;


	printf("Enter the How many numbers you want to checked : ");
	scanf("%d",&loop);
	printf("\n");

	for (i = 0; i < loop; i++)
			{
			printf("Enter the number you want to checked :");
			scanf("%d",&num);

			if(num%2)
			printf("num : %d is Odd number\n",num);
			else
			printf("num : %d is Even number\n",num);

			}

return 0;
}
