#include<stdio.h>
#include<stdlib.h>

int main(){

//int a[] = {1,3,6,7};
//scanf("%d",&n);
//char b[] = {'s', 'i', 'n', 'a'};
int n;
printf("Enter array size:\t");
scanf("%d",&n);  
printf("\n");
int *a;
a=(int*)malloc(n*sizeof(int));
for (int i=0;i<n;i++){
	printf("Enter a number of array:\t");
	scanf("%d",&a[i]);
}

printf("\n");

int min_num=a[0];
int max_num=a[0];
int sum_num=a[0];
for (int i=0;i<n;i++){
	sum_num+=a[i]+a[n];
if (a[i]<min_num){
min_num=a[i];
}
if(a[i]>max_num){
max_num=a[i];
} 
}

printf("sum_num:%d\t",sum_num);
printf("max_num:%d\t",max_num);
printf("min_num:%d\t",min_num);
printf("mean: %f\t", (float)(max_num + min_num)/2.0);
free(a);


return 0;
}

