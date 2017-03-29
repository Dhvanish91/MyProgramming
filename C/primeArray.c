#include <stdio.h>

int main()
{
	int a[5];
	int i = 0;
	int num = 0;
	int j = 0;
	for (i = 0; i < 5; i++)
	{
		printf("Enter the number : %d\n",i);
		scanf("%d",&a[i]);
	}

	for(i = 0 ; i < 5; i++)
	{
		num = a[i];

		for(j = 2;j < num; j++)
		{
			if(num%j==0)
				break;
			else
				continue;
		}
		if(num == j)
			printf("Prime Numbers from arrary location is : %d at pistion %d\n",num,i);

	}
	return 0;
}
