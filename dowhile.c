//print the sum of first n natural numbers
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d\n",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
printf("sum is %d\n",sum);
return 0;
}