 #include<stdio.h>
#include<conio.h>
int main()
{
	int even, opt;
	printf("Enter a number: ");
	scanf("%d",&even);
	if(even%2==0)
		opt=1;
	switch(opt)		
	{
		case 1:
			printf("%d",even+1);
			break;
		default:
			printf("Invalid number");								
	}
	getch();
}
