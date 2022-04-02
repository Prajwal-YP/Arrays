#include<stdio.h>

void main()
{
	int n,i,j,t;
	printf("Enter array size : ");
	scanf("%d",&n);
	int a[n];
	srand(time(0));
	for(i=0;i<n;i++)
		a[i]=rand()%10+1;
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)
		printf("\n%d->%d",i,a[i]);

	
	int k,l,u,m,f;
	l=0;
	u=n-1;
	f=0;
	
	printf("\n\nEnter search element : ");
	scanf("%d",&k);
	
	while(l<=u)
	{
		
		m=(u+l)/2;
		if(a[m]==k)
		{
			f=1;
			break;
		}	
		else if (k>a[m])
			l=m+1;
		else
			u=m-1;
	}
	
	if(f==1)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==k)
				printf("\n\n\t%d found at position-%d",k,i+1);
		}
	}
	else
		printf("\n\n\tKey not found ! !");
	
}
