#include<stdio.h>
#include<conio.h>
void main()
{
	int c=0,n;
  clrscr();
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	printf("%d",c);
getch();
}
