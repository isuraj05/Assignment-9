#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int a,b,c,opt;
	printf("Menu:\n1:Lengths of an isosceles triangle or not\n");
	printf("2:Lengths of sides of a right angled triangle or not\n");
	printf("3:Equilateral triangle or not\n");
	printf("4:Exit\n\n");
	while(1)
	{
		printf("Choose any option from the menu to perform the task\n");
	    scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("\nEnter three numbers: ");
				scanf("%d%d%d",&a,&b,&c);
				if(a==b || b==c || c==a)
					printf("It is an isosceles triangle\n\n");
				else
					printf("It is not an isosceles triangle\n\n");
				break;
			case 2:
				printf("\nEnter three numbers: ");
				scanf("%d%d%d",&a,&b,&c);
				if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
					printf("It is a right angled triangle\n\n");
				else
					printf("It is not a right angled triangle\n\n");
				break;
			case 3:
				printf("\nEnter three numbers: ");
				scanf("%d%d%d",&a,&b,&c);
				if(a==b || b==c)
					printf("It is an equilateral triangle\n\n");
				else
					printf("It is not an equilateral triangle\n\n");
				break;
			case 4:
				printf("We are sorry to hear that you have chosen to stop the task :(");
				exit(0);
			default:
			    printf("Invalid option, Please choose a valid option from the menu\n\n");									
		}
	}
	getch();
}
