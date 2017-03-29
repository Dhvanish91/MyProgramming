#include <stdio.h>

int main()
{

	int a[] = {5,2,7,13,3};
	int i,j,ele;
	int temp;
	ele = sizeof(a)/sizeof(int);

	for( i = 0; i < ele - 1 ; i++)
	{

		for(j = 0; j < ele -i - 1 ; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for (i = 0; i < ele; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
}

/*
int main()
{

	int a[] = {5,2,7,13,3};
	int i,j,ele;
	int temp;
	ele = sizeof(a)/sizeof(int);

	for( i = 0; i < ele - 1; i++)
	{

		for(j = 0; j < ele -i - 1; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}

		}
	}

	for (i = 0; i < ele; i++)
		printf("a[%d] = %d\n", i, a[i]);
}
*/


