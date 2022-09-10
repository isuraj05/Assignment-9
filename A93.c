#include<stdio.h>
#include<conio.h>
int main()
{
	int day;
	printf("Enter a day number of a week: ");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("What a busy day");
			break;
		case 2:
			printf("Can't tolerate it no more");
			break;
		case 3:
			printf("Oh gosh! I'm gonna die this week");
			break;
		case 4:
			printf("Need the weekend badly");
			break;
		case 5:
			printf("Oh friday hain burrrraaahh");
			break;
		case 6:
			printf("Nachaange saari raat, soniyo vey");
			break;
		case 7:
			printf("Phir wahi kal se dukh, dard, peeda");
			break;
		default:
			printf("Kam se kam day number toh sahi se enter kar lo bawa");
	}
	getch();
}
