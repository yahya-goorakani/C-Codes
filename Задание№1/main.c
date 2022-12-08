#include<stdio.h>

int main (){

int a;

printf("Enter an integer:");
scanf("%d",&a);

int sum=0;
for(int i=1;i<=a;i++) 
{
	sum+=i;
}
printf("the sum of the digits of the number %d is equal to : %d ",a,sum);

return 0;
}