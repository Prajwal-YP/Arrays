#include<stdio.h>
#include<string.h>

void main()
{
	char a[50]={};
	
	printf("Enter string : ");
	gets(a);
	
	int i;
	
	for(i=strlen(a)-1;a[i]!=' ';i--);
	i-=1;
	for(;a[i]!=' ';i--);
	for(i=i+1;a[i]!=' ';i++)
		putchar(a[i]);
}
