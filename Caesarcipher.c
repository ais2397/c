# c
#include<stdio.h>
#include<string.h>
int main()
{
char string [100];
int n;
int x=26;
printf("Enter a multi line string( press Tab and then Enter, to end input)\n");
scanf("%[^\t]s", string);
printf("Enter the key (0-26)");
scanf ("%d",&n);
for (int j=0;j<strlen(string);j++)
	{
	string[j] = string[j] + n;
	
	if( (string[j]>='a' && string[j]<='z') || (string[j]>='A' && string[j]<='Z'))
	{continue;}
		
	else
		{
		string[j]=string[j]-x;
		
		}
	}
printf("%s", string);
return 0;
}
