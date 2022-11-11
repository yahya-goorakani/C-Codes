#include<stdio.h>
int main(){
int a,s,i;
float m;
int n;
printf("please specify the number of numbers:");
scanf("%d",&n);
printf("______________________\n");
	while(i<n){
	printf("Enter a number:");
	scanf("%d",&a);
printf("______________________\n");
	s+=a;
	i++;

}
m=(float)s/i;
	
printf("sam of number=%d\t\t",s);
printf("mean of number=%lf\t\t",m);
return 0;
}
