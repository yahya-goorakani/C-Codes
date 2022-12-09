#include<stdio.h>
#include<stdlib.h>
int main (){

int a;
int a1;
printf("Enter an integer:");
scanf("%d",&a);

a1=a;
int sum=0;
   while (a){
       sum+=a%10;
      a/=10;
   }
if(sum<0)
{
        sum=abs(sum);
}
printf("the sum of the digits of the number %d is equal to : %d ",a1,sum);

return 0;
}