//To print average of three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	float average;
	printf("Enter the value for a,b and c \n");
	scanf("%d%d%d",&a,&b,&c);
	average=(a+b+c)/3;
	printf("The average of three number is=%f",average);
	return 0;
}
