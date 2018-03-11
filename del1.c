#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
int n=13,x=26,j;

char * s[1000];
if (argc!=1)
	{
	strcpy(s,argv[1]);
	}
char y[1000];
strcpy(y,s);
for (j=0;j<strlen(y);j++)
	{
	y[j] = y[j] + n;
	if( (y[j]>='a' && y[j]<='z') || (y[j]>='A' && y[j]<='Z'))
	{
	continue;
	}
		
	else
	{
	y[j]=y[j]-x;
	}
	}
printf("The encoded text is: %s", y);
return 0;
}
