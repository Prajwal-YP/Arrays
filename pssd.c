#include<stdio.h>

void main()
{
	char a[100]={},b[100]={};
	int i,j,p=1;
	
	printf("Enter password : ");
	gets(a);
	printf("Renter password : ");
	gets(b);

	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++);
	
	if(i!=j)
		p=0;
	else
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]!=b[i])
				p=0;
		}
	}
	if(p==1)
		printf("\n\t\tSUCCESS . . .");
	else
		printf("\n\n\tPasswords do not match !!!");
}
