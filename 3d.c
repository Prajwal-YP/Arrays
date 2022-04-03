#include<stdio.h>

void main()
{
	int i,j,k,m,n,o;
	printf("Enter array value : ");
	scanf("%d",&m);
	printf("Enter row value : ");
	scanf("%d",&n);
	printf("Enter column value : ");
	scanf("%d",&o);
	int a[m][n][o];
	
	srand(time(0));
	
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	for(k=0;k<o;k++)
		a[i][j][k]=rand()%10;
	
	printf("\n\n3-d array elements are : \n\n");
	
	for(i=0;i<m;i++)
	{
		printf("\n\n-------\nArray-%d :\n-------\n",i+1);
		for(j=0;j<n;j++)
		{
			printf("\n");
			for(k=0;k<o;k++)
				printf("%d\t",a[i][j][k]);
		}
	}	
}
