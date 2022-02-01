#include<conio.h>
#include<stdio.h>
int opr(int a,int b,int ch)
{
	if(ch == 1)
	{
		return a+b;
	}
	if(ch == 2)
	{
		return a-b;
	}
	if(ch == 3)
	{
		return a*b;
	}
	if(ch == 4)
	{
		return a/b;
	}
}
void main()
{
	int a,b,ch,ans;
	clrscr();
	printf("enter the value of a & b:- ");
	scanf("%d %d",&a,&b);
	printf("1.+ 2.- 3.* 4./ \nenter you choice:- ");
	scanf("%d",&ch);
	if(ch > 4)
	{
		printf("invalid input");
		getch();
		main();
	}
	ans = opr(a,b,ch);
	printf("ans is:- %d",ans);
	getch();
}