#include<stdio.h>

#define TRUE 1
#define FALSE 0
int main(){
	int a;
	
	printf("ENTER AN INTEGER:");
	scanf("%d",&a);
	printf("\n");

	int prime=TRUE;
	int i;
	for(i=2;i<a;i++) 
	{
		if(a % i==0)
		{
			prime=FALSE;
			break;
		}
	}
	if(prime)
	{
		printf("%d is a PRIME number\n",a);
	}
	else
	{
	printf("%d is a NOT PRAME number\n",a);
	}
	return 0;
	}
