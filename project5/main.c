#include<stdio.h>
#include<stdlib.h>

int main(void){
    int r,c;
    printf("Enter the size of the array:R and C=\t");
    scanf("%d ",&r);

    // матрица у тебя квадратная  c= r
    //printf("Enter the size of the array:C=\t");
    scanf("%d",&c);
    printf("\n");

    //int array[r][c];//лучше выделять память динамически через malloc


    int **array=((int**)malloc(r * sizeof(int)));
   for(int i=0;i<r;++i){
           array[i]=(int*)malloc(c * sizeof(int));
                           }




    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
        printf("array[%d][%d]:\t",i,j);
        scanf("%d",&(array[i][j]));

        }
    }



    int sum;
    float maen_ind;
    unsigned   main_sum_ind = 0 ;

    sum  = 0;
    for(int i=0;i<r;++i){
        sum+=array[i][i];
    }
    printf("\n------------------------------\n");
    printf("The sum of the numbers of the main diagonal of the matrix:%d\t",sum);
    printf("\n");
 main_sum_ind=sum/r;
    maen_ind=sum/r;
    printf("Average numbers of main diagonal %f\t\n",maen_ind);


    int min;
    int i_min,j_min;

    //нужно найти любой положительный элемент
    for(int i=0;i<r;++i)
    {
        for(int j=0;j<c;++j)
        {


            //ищем положительный
       }
    }
    // если положительных нет, то выходим из программы
    //а потом искать минимум среди положительных
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            //ищем минимум среди положительных и запоминаем индексы
            if(array[i][j]<min && array[i][j]){
                min = array[i][j];
                i_min = i;
                j_min = j;
            }
        }
    }

    array[i_min][j_min] = main_sum_ind;


    //распечатываем массив
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
printf("\n------------------------------\n");



  for(int i=0;i<r;++i){


           free(array[i]);
                  }
                   // free(array);
return 0;
}
