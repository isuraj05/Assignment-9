 #include<stdio.h>
#include<conio.h>
int main()
{
	int n,opt;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(n>0 || n<0)
		opt=1;
		
	switch(opt)		
	{
		case 1:
			printf("%d",n-n*2);
			break;
		default:
			printf("Invalid number");							
	}
	getch();
}
