#include<stdio.h>
#include<time.h>

void main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	srand(time(0));
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		a[i][j]=rand()%10+1;
		
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		b[i][j]=rand()%10+1;
		
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		c[i][j]=a[i][j]+b[i][j];	
	
	printf("Elements of Array-A is : \n\n");
	for(i=0;i<3;i++)
	{
		printf("\t\t");
		for(j=0;j<3;j++)
		{
			if(a[i][j]<10)
				printf("\t0%d",a[i][j]);
			else
				printf("\t%d",a[i][j]);
		}
			
		printf("\n");
	}
	
	printf("\n\nElements of Array-B is : \n\n");
	for(i=0;i<3;i++)
	{
		printf("\t\t");
		for(j=0;j<3;j++)
		{
			if(b[i][j]<10)
				printf("\t0%d",b[i][j]);
			else
				printf("\t%d",b[i][j]);
		}
			
		printf("\n");
	}
	
	printf("\n\nElements of Array-C is : (Array-A + Array-B) : \n\n");
	for(i=0;i<3;i++)
	{
		printf("\t\t");
		for(j=0;j<3;j++)
		{
			if(c[i][j]<10)
				printf("\t0%d",c[i][j]);
			else
				printf("\t%d",c[i][j]);
		}
			
		printf("\n");
	}
	
}
