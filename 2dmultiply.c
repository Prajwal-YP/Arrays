#include<stdio.h>
void main()
{
	int i,j,k,n,m,o;
	srand(time(0));
	
	printf("Enter array-1 row : ");
	scanf("%d",&n);
	printf("Enter array-1 column : ");
	scanf("%d",&m);
	int a[n][m];
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
		a[i][j]=rand()%10;
	
	printf("\nEnter array-2 column : ");
	scanf("%d",&o);
	int b[n][m];
	for(i=0;i<m;i++)
	for(j=0;j<o;j++)
		b[i][j]=rand()%10;
	
	int c[n][o];
	for(i=0;i<n;i++)
	for(j=0;j<o;j++)
		c[i][j]=0;
		
	for(i=0;i<n;i++)
	for(j=0;j<o;j++)	
	{
		for(k=0;k<m;k++)
			c[i][j]+=a[i][k]*b[k][j];
	}
	
	printf("\n\nArray 1 :");
	for(i=0;i<n;i++)
	{
		printf("\n\t");
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	
	printf("\n\nArray 2 :");
	for(i=0;i<m;i++)
	{
		printf("\n\t");
		for(j=0;j<o;j++)
		{
			printf("%d\t",b[i][j]);
		}
	}
	
	printf("\n\nArray 3 = ( Array-1 X Array-2 ) :");
	for(i=0;i<n;i++)
	{
		printf("\n\t");
		for(j=0;j<o;j++)
		{
			if(c[i][j]<10)
				printf("0%d\t",c[i][j]);
			else
				printf("%d\t",c[i][j]);
		}
	}
}
