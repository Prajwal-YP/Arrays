#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int i,c,j,a[5][5];
	srand(time(0));
while(1)
{	
	printf("\n\nMENU :\n------\n\n1.Upper Triangular Matrix\n2.Lower Triangular Matrix\n3.exit\n\n\tEnter the Choice : ");
	scanf("%d",&c);
if(c==1)
{
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j<i)
				a[i][j]=0;
			else				
				a[i][j]=rand()%10+1;
		}
	}
}
else if(c==2)
{
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j>i)
				a[i][j]=0;
			else				
				a[i][j]=rand()%10+1;
		}
	}
}	
else if(c==3)
{
	printf("\n\n\tTHANK YOU .");
	exit(0);
}
	
else
	printf("\n\n\tINVALID CHOICE !!!");
	
if(c<3)
{
	for(i=0;i<5;i++)
	{
		printf("\n\t\t");
		for(j=0;j<5;j++)
		{
			
			printf("%d\t",a[i][j]);
		}
	}
}	
	
}
}
