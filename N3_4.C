#include<conio.h>
#include<stdio.h>

void check(char *inp)
{
	int i;
	for(i=0;inp[i] != '\0';i++)
	{
		if(inp[i] == '['||inp[i]=='{'||inp[i]=='@'||inp[i]=='$')
		{
			continue;
		}
		else
		{
			printf("%c",inp[i]);
		}
	}
}
void main()
{
	char *input;
	clrscr();
	printf("enter the string:- ");
	gets(input);
	check(input);
	getch();
}