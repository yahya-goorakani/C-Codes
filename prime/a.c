#include<stdio.h>
#include<math.h>
#define TRUE 1
#define FALSE 0

int is_prime(int a);

int main(){

        int a;

        do
        {
                printf("enter an integer :");
                        scanf("%d",&a);

                if(is_prime(a))
                {
                printf("%dis a PRIME number.",a);
                }
                else
                {
                printf("%dis a NOT PRIME number.",a);
                }
        printf("\n");
                }while(a>0);

        return 0;
}
int is_prime(int a)
{
        int prime=TRUE;
        int i;
        for(i=2;i<=sqrt(a);i++)
        {
                if(a%i==0)
                {
                        prime=FALSE;
                        break;
                }
        }
        return prime;

}






/*#include<stdio.h>
#include<math.h>
#define TRUE 1
#define FALSE 0

int is_prime(int a);

int main(){
	
        int a;
	
        do
        {
                printf("enter an integer :");
                        scanf("%d",&a);

                if(is_prime(a))
                {
                printf("%dis a PRIME number.",a);
                }
                else
                {
                printf("%dis a NOT PRIME number.",a);
                }
        printf("\n");
                }while(a<2); 

        return 0;
}
int is_prime(int a)
{
        
        
        for(int i=2;i<=sqrt(2);i++)
        {
		if(a%i==0)
		if(a<2)return FALSE;
		if(-0)break;
               
                {
                      return FALSE;
                        break;
                }
        }
        return TRUE;

}*/
