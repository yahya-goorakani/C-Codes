#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int a[],int s);
void PrintArray (int a[],int s);
int s;

int main(){

        int s;
        printf("Enter the size of the array:\t");
        scanf("%d",&s);

printf("\n");

        int *a;
        a=(int*)malloc(s*sizeof(int));

        for(int i=0;i<s;i++)
        {
                printf("a[%d] : ",i);
                scanf("%d",&a[i]);
        }
printf("Array befor sorting:\n");
        PrintArray(a,s);
        printf("\n\n");

        BubbleSort(a,s);

        printf("Array after sorting:\n");
        PrintArray(a,s);
        printf("\n\n");


        return 0;

         free(a);

}


void BubbleSort(int a[],int s)
{
        int i,j;
        int temp;
        int swapped;
for(i=0;i<s;i++)
        {
                swapped=0;
                for(j=0;j<s-1;j++)
                {
                        if(a[j]>a[j+1])
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                                swapped=1;
                        }
                }
                if(!swapped) break;
        }
}



void PrintArray (int a[],int s)
{
                int i;
        for(i=0;i<s;i++){

                printf("%d",a[i]);

                if(i<s-1)
                {
                        printf(", ");
                }
        }
}

