#include<stdio.h>
#include<stdlib.h>



int main(void)
{

    int r , c ;
printf("enter a size array_r:\t");
scanf("%d",&r);
printf("enter a size array_c:\t");
scanf("%d",&c);



    int* ptr = malloc((r * c) * sizeof(int));


    /* Putting 1 to 12 in the 1D array in a sequence */

    for (int i = 0; i < r * c; i++)

        ptr[i] = i + 1;


    /* Accessing the array values as if it was a 2D array */

    for (int i = 0; i < r; i++) {

        for (int j = 0; j < c; j++)

            printf("%d \t", ptr[i * c + j]);

        printf("\n");

    }


    free(ptr);



    return 0;
}
