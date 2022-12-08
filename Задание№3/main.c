#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>


int main(){
int a;
int q;
int j;
bool j1=false;
unsigned index;
printf("Enter the array size:\t");
scanf("%d",&a);
printf("\n");

int* array;	
array=(int*)malloc(a*sizeof(int));

printf("Enter a first digit of  array:\t");
scanf("%d",&q);
printf("\n");
printf("Enter your desired number to search in the list\t");
scanf("%d",&j);
	
for(int i=0;i<a;i++) 
{
 
array[i]+=i+q;
 	 printf("\narray[%d]:%d\t",i,array[i]);
	 printf("\n");

	  if(j==array[i])
  {
	  index=i;
   j1=true;
  }

}



if(j1)
{
printf("\nNumbeer %d found and its index is = array[%d] \n\t",j, index);
}

else

{
printf("\nNumber %d not found.\n\t",j);
}

free(array);


return 0;

}