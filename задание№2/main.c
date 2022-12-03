#include<stdio.h>
#include<stdlib.h>

//#define  swap (max_num,min_num)

int main(){

	int a;
	printf("Enter the soze of the array:\t");
	scanf("%d",&a);

printf("\n");

	int *array;
	array=(int*)malloc(a*sizeof(int));

	for(int i=0;i<a;i++)
	{
		printf("array[%d] : ",i);
		scanf("%d",&array[i]);
	}


int max_num=array[0];
int min_num=array[0];
unsigned min_ind = 0;
unsigned max_ind = 0;

for(int i=0;i<a;i++)
{
	
	if(array[i]>max_num)
	{
		max_num=array[i];
		max_ind = i;
	}

	if(array[i]<min_num)
	{
		min_num=array[i];
		min_ind = i;
	}

}
printf("------------------------------\n");
printf("max_num:%d\t",max_num);
printf("min_num:%d\t",min_num);
printf("mean_num:%f\t",(float)(min_num+max_num)/2.0);
printf("\n------------------------------\n");







//max_num=max_num+min_num;
//min_num=max_num-min_num;
//max_num=max_num-min_num;
int temp= array[max_ind];
array[max_ind] = array[min_ind];
array[min_ind] = temp;


for(int i=0;i<a;i++)
        {
                printf("array[%d] : %d\n", i, array[i]);
        }

printf("------------------------------\n");
printf("max_num:%d\t",max_num);
printf("min_num:%d\t",min_num);
printf("sum_num:%d\t",max_num+min_num);
printf("\n------------------------------");
free(array);
return 0;
}