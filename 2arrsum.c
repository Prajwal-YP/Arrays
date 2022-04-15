#include<stdio.h>

main()
{
	int i,n,s=0;
	
	printf("\nEnter all Array(s) Size : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	printf("\nEnter Array One ELEMENTS :");
	printf("\n------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter element-%d\t:\t",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter Array Two ELEMENTS :");
	printf("\n------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter element-%d\t:\t",i+1);
		scanf("%d",&b[i]);
	}
	
	printf("\n\nSUM OF TWO ARRAY(S) ARE :");
	printf("\n-------------------------\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("\n\t\tElement-%d\t:\t%d",i+1,c[i]);
	}
	for(i=0;i<n;i++)
		s+=c[i];
	printf("\n\n\t\tTOTAL SUM\t:\t%d\n\n",s);
	
}
