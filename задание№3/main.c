#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int search(int array[], int a){
     
int g;
int h;
printf("Enter the first digit of the array: ");
scanf("%d",&h);
printf("Enter a digit : ");
scanf("%d",&g);
printf("____________________\n");

int yahya=true;


        for(int i=0;i<a;i++)
        {
                array[i] += i+h ;
        printf("array[%d]=%d",i,array[i]);
        printf("\n");
        }

int left_index = 0;
int right_index = a;
while(left_index < right_index){
	if(right_index + h <= g){
		right_index==-1;
		break;
	}
	else if(g >= h + right_index+h){
	right_index==-1;
                break;
	}
int mid_index = (right_index+left_index)/2;

if (array[mid_index] > g){
right_index = mid_index;
}
else if(array[mid_index] < g){
left_index = mid_index;
}
else if (array[mid_index] == g){
return mid_index;
}
}
return -1;
}
int main(){
	        int a;
	printf("\n____________________\n");
	printf("Enter the array size: ");
        scanf("%d",&a);


int* array;
 array=(int*)malloc(a*sizeof(int));

int res = search(array, a);
if (res == -1){
printf("____________________\n");
printf("Not found!\n");
}
else{
printf("____________________\n");
printf("Number %d found and its index is %d", array[res], res);
}

	free(array);
	return 0;
}