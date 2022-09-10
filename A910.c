 #include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,root,opt;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	root=b*b-4*a*c;
	
	if(root>0)
		opt=1;
	else if(root==0)
		opt=2;
	else
		opt=3;
		
	switch(opt)		
	{
		case 1:
			printf("Real & distinct roots");
			break;
		case 2:
			printf("Real & equal roots");
			break;
		case 3:
			printf("Imaginary roots");							
	}
	getch();
}
