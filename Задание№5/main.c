#include <stdio.h>
#include <malloc.h>

void Sort_Arr(float *array, int n){
    int index_min; 
    float sup;
    for (int i = 0; i < (n-1); i++){
        index_min = i;
        for (int j = i+1; j < n; j++){
            if (array[j] < array[index_min]) index_min = j;
        }
        if( index_min = i)
        {
        sup = array[i];
        array[i] = array[index_min];
        array[index_min] = sup;
        }
    }
}


int main(){
    float *array;
    int n;

    printf("Введите размер массива >=1: ");
    scanf("%d", &n);
    if (n < 1) printf("Невереный размер массива!");
    else{
        array = (float*)malloc(n*sizeof(float));
        for (int i = 0; i<n; i++){
            printf("array[%d]= ", i);
            scanf("%f", &array[i]);
        }
        Sort_Arr(array, n);
        for (int i = 0; i < n; i++) printf("%5.2f\t", array[i]);
        free(array);
    }
