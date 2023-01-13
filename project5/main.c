#include<stdio.h>
#include<stdlib.h>



int main(void){

        int r;
        printf("Enter the size of the array:R=\t");
        scanf("%d",&r);
        int c;
        printf("Enter the size of the array:C=\t");
        scanf("%d",&c);

printf("\n");

        int array[r][c];

        for(int i=0;i<r;++i){

                for(int j=0;j<c;++j){
                printf("array[%d][%d]:\t",i,j);
                scanf("%d",&array[i][j]);
                }

        }

        int sum;
        float maen_ind;
        unsigned  maen_sum_ind = 0;


        for(int i=0;i<r;++i)
        {
                sum+=array[i][i];
        }
        printf("\n------------------------------\n");
        printf("The sum of the numbers of the main diagonal of the matrix:%d\t",sum);
        printf("\n");

         maen_sum_ind=sum/r;
        maen_ind=sum/r;
        printf("Average numbers of main diagonal %f\t",maen_ind);
int max_num=array[0][0];
int min_num=array[0][0];
unsigned min_ind = 0;
unsigned max_ind = 0;



for(int i=0;i<c;i++)
{

        if(array[i][i]>max_num)
        {
                max_num=array[i][i];
                max_ind =i;
        }

        if(array[i][i]<min_num)
        {
                min_num=array[i][i];
                min_ind =i;
        }

}

printf("\n------------------------------\n");
printf("The largest number:%d\t",max_num);
printf("The smallest number:%d\t",min_num);
printf("The average of the largest number and the smallest number:%f\t",(float)(min_num+max_num)/2.0);
printf("\n------------------------------\n");







//max_num=max_num+min_num;
//min_num=max_num-min_num;
//max_num=max_num-min_num;

int temp = *array [min_ind];
*array [min_ind] = maen_sum_ind;
maen_sum_ind = temp;



        for(int i=0;i<r;++i){

                for(int j=0;j<c;++j){

                printf("array[%d][%d]:%d\t",i,j,array[i][j]);
                printf("\n");
                }

        }


printf("The smallest number:%d\t",*array [min_ind]);
printf("Average numbers of main diagonal:%d\t",maen_sum_ind);
//printf("sum_maxANDmin:%d\t",max_num+min_num);
printf("\n------------------------------");
//free(array);

return 0;
}
