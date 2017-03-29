#include <stdio.h>

int main()
{
	int a[5] ={10,2,15,27,1};
	int i = 0, j = 0;
	int option = 0,temp;

	printf("Before choosing number is : ");
	for(i = 0; i < 5 ; i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n");

	printf("Choose option:\n1) Assending Order\n2)Decending Order\n");
	scanf("%d",&option);

	for(i = 0; i < 5 - 1; i++)
	{
		for(j = 0; j < 5 - i -1; j++)
		{
			if(option == 1)
			{
				if(a[j] < a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
			else if(option ==2)
			{
				if(a[j] > a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}

			}
			else
			{
				printf("Unknown Error: Please Try Again Later:");
			}
		}
	}

	printf("After the choosing option Result is: ");

	for(i = 0; i < 5 ; i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n");
	return 0;
}
