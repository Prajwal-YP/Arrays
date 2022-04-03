#include<stdio.h>
#include<time.h>

void main()
{
	int i,j,a[5][5],d=-1;
	srand(time(0));
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		a[i][j]=rand()%10;
	
	while(d<0 || d>9)
	{
		printf("Enter value of diagnal element (from 0 - 9) :");
		scanf("%d",&d);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==j || i+j==4)
				a[i][j]=d;
		}
	}
	
	printf("Array elements are : \n");
	for(i=0;i<5;i++)
	{
	    printf("\n\n\t");
	    for(j=0;j<5;j++)
	    {
	    	printf("%d\t",a[i][j]);
		}
	            
	}
}
	
