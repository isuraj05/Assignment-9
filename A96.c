#include<stdio.h>
#include<conio.h>
int main()
{
	int year,opt;
	printf("Enter an year: ");
	scanf("%d",&year);
	if(year%100)
		if(year%4)
			opt=2;
		else
			opt=1;
	else
		if(year%400)
			opt=2;
		else
			opt=1;
			
	switch(opt)
	{
		case 1:
			printf("It is a leap year");
			break;
		case 2:
			printf("It is not a leap year");									
	}
	getch();
}
