#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int opt;
	printf("Enter a number from 1 to 3: ");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			printf("Good");
			break;
		case 2:
			printf("Better");
			break;
		case 3:
			printf("Best");
			break;
		default:
		    printf("Invalid");									
	}
	getch();
}
