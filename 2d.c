#include<stdio.h>
void main()
{
	int i,j;
	int a[4][5];
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",a[i][j]);
		}
	}
}
