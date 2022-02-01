#include<conio.h>
#include<stdio.h>

void sort(int *a,int size)
{
	int i,temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void main()
{
	int *a,size;
	int i;
	clrscr();
	printf("enter the size of the array:- ");
	scanf("%d",&size);
	a = (int *)malloc(size * sizeof(int));
	for(i=0;i<size;i++)
	{
		printf("\nenter the value of array:- ");
		scanf("%d",&a[i]);
	}
	printf("\nbefore sorting\n");
	for(i=0;i<size;i++)
	{
		printf("%d--",a[i]);
	}
	sort(&a,size);
	printf("\nafter sorting\n");
	for(i=0;i<size;i++)
	{
		printf("%d--",a[i]);
	}
	getch();
}