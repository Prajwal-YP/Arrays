  #include<stdio.h>

void main()
{
	int i,j,a[5][5],k,f=0;
	srand(time(0));
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		a[i][j]=rand()%10;
	
	printf("Array elements are : \n");
	for(i=0;i<5;i++)
	{
	    printf("\n\n\t");
	    for(j=0;j<5;j++)
	    {
	    	printf("%d\t",a[i][j]);
		}
	            
	}
	
	printf("\n\nEnter search element : ");
	scanf("%d",&k);
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==k)
			{
				f++;
			}
		}	
	}
	
	
	if(f>=1)
	{
		printf("\n\n\t\t\"%d\" is found %d-times at Array-A in the follwing Locations . . . \n\n",k,f);
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(a[i][j]==k)
					printf("\n%d is found at Location a[%d][%d] .",k,i,j);
			}
		}
	}
	else
		printf("%d not found.",k);
}
