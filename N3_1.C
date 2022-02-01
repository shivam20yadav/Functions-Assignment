#include<conio.h>
#include<stdio.h>
void swap(int *a,int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
void main()
{
	int a,b;
	clrscr();
	printf("enter the value of a & b:- ");
	scanf("%d %d",&a,&b);
	printf("before swap:: a::%d b::%d",a,b);
	swap(&a,&b);//call by reference
	printf("\nafter swap:: a::%d b::%d",a,b);
	getch();
}