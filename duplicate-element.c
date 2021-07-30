#include<stdio.h>
{
	int n,i,a[100];
	printf("N= ");
	scanf("%d",&n);
	printf("A[]= ");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		int p=a[i];
		for(int j=0;j<n-1;J++)
		{
			if(i!=j)
			{
				if(p==a[j])
				{
					printf("\nThe duplicate number is: %d",a[j]);
				}
			}
		}
	}
	return 0;
}
	
	