#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int a,b,opt;
	printf("Menu:\n1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Exit\n\n");
	while(1)
	{
		printf("Choose any option from the menu to perform the task\n");
	    scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("\nEnter two numbers: ");
				scanf("%d%d",&a,&b);
				printf("Sum is %d\n\n",a+b);
				break;
			case 2:
				printf("\nEnter two numbers: ");
				scanf("%d%d",&a,&b);
				printf("Difference is %d\n\n",a-b);
				break;
			case 3:
				printf("\nEnter two numbers: ");
				scanf("%d%d",&a,&b);
				printf("Product is %d\n\n",a*b);
				break;
			case 4:
				printf("\nEnter two numbers: ");
				scanf("%d%d",&a,&b);
				printf("Quotient is %d\n\n",a/b);
				break;
			case 5:
				printf("We are sorry to hear that you have chosen to stop the task :(");
				exit(0);
			default:
			    printf("Invalid option, Please choose a valid option from the menu\n\n");									
		}
	}
	getch();
}
