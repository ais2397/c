#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
int n,x=26,j,i;
char * s[1000];
char y[1000];
const char *name="TEST"; 
char* z=getenv(name);
i=atoi(z);


if (argc!=1)
	{
	strcpy(s,argv[1]);
	if (i!=NULL)
	{
	(n=i);
	}
	else
	{
	n=13;
	}
	}
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
