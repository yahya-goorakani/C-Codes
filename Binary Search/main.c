#include<stdio.h>
#include<stdlib.h>
int main()
{
int right,left,x,n,i,*arr,mid;

        printf("Enter element of array:");
        scanf("%d",&n);

        arr=(int*)malloc(n*sizeof(int));

        printf("Enter %d integer to array:\n",n);

for(i=0;i<n;++i) scanf("%d",&arr[i]);
printf("Enter integer to found:\n");
scanf("%d",&x);
     right=0;
left=n-1;

while(right<=left)
{
mid=(right+left)/2;

         if(arr[mid]==x)
        {
                printf("Element%d found,at index:%d",x,mid+1);
                break;
        }
        if(arr[mid]<x) right=mid+1;

        else
                left=mid-1;
}
if(x!=arr[mid]){
        printf("Element not found in the array.");
}


       return 0;
}
