#include<stdio.h>
#include<stdlib.h>


int main(){
        int a;
        printf("enter a size of array:\n");
        scanf("%d",&a);
        printf("\n");
        int* arr=malloc(a*sizeof(int));

        for(int i=0; i<a; ++i)
        {

                printf("arr[%d]:",i);
                scanf("%d",&arr[i]);
                printf("\n");
        }


        int sum;
int min_1=arr[0]/2;
unsigned min_11 = 0;
for(int i=0;i<a;++i){


       sum+=arr[i]%10;
      arr[i]/=10;
      if(sum<min_1)
      {
              min_1=sum;
              min_11=i;
      }

   printf("%d",sum);
   printf("\n");
}
return 0;
}