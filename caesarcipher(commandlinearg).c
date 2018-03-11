# c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
int n,x=26,j;
int * z;
char * s[1000];
char y[1000];
if (argc==2)
	{
	strcpy(s,argv[1]);
	n=13;
	}
else if (argc>=3)
	{strcpy(s,argv[1]);
	n= (atoi(argv[2]));
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
