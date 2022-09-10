#include<stdio.h>
#include<conio.h>
int main()
{
	int unit,unit_2,opt;
	float bill;
	printf("Enter total electricity unit: ");
	scanf("%d",&unit);
	if(unit<=50)
		opt=1;
	else if(unit>50 && unit<=150)
		opt=2;
	else if(unit>150 && unit<=250)
		opt=3;
	else
		opt=4;
		
	switch(opt)		
	{
		case 1:
			bill=unit*0.50;
			printf("Total electricity bill - Rs. %f",bill+(bill*20/100));
			break;
		case 2:
			unit_2=unit-50;
			bill=(50*0.50)+(unit_2*0.75);
			printf("Total electricity bill - Rs. %f",bill+(bill*20/100));
			break;
		case 3:
			unit_2=unit-150;
			bill=(50*0.50)+(100*0.75)+(unit_2*1.20);
			printf("Total electricity bill - Rs. %f",bill+(bill*20/100));
			break;
		case 4:
			unit_2=unit-250;
			bill=(50*0.50)+(100*0.75)+(100*1.20)+(unit_2*1.50);
			printf("Total electricity bill - Rs. %f",bill+(bill*20/100));									
	}
	getch();
}
