//switch problems of day
#include<stdio.h>
int main()
{
	int day;//1-mon,2-tue,3-wed
	printf("enter day(1-7):");
	scanf("%d",&day);
	switch(day){
		case 1:printf("Monday\n");
		break;
		case 2:printf("tuesday\n");
		break;
		case 3:printf("Wednesday\n");
		break;
		case 4:printf("Thursday\n");
		break;
		case 5:printf("Friday\n");
		break;
		case 6:printf("Saturday\n");
		break;
		case 7:printf("sunday\n");
		break;
		default:printf("Not a valid day!\n");
		
	}
	return 0;
}
