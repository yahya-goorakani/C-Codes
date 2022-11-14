#include<stdio.h>
#include<math.h>
int main (){

        int q[]={1,2,2,3,4,5,6,7,8,
                8,7,6,9,4,5,8,0,8,2,
                1,2,3,1,3,9,7,3,8,1,
                0,9,7,4,6,3,4,6,7,8};

        printf("-----------------\n");
        printf("size of array q is %ld bytes\n",sizeof(q));
        printf("size of int is %ld bytes\n",sizeof(int));
//      printf("size of q(0) is %ld bytes.\n",sizeof(0));
        printf("----------------\n");


        int N=sizeof(q)/sizeof(q[0]);  // /sizeof(inta):
        int w[10];
        for(int i=0;i<10;i++){
                w[i]=0;
        }
        int sum=0;
        float mean;
        for(int j=0;j<N;j++){
        w[q[j]]++;
        sum+=q[j];
        }
        mean=(float)sum/N;

        float stdev=0;
        for(int j=0;j<N;j++)
        {
                stdev+=(q[j]-mean)*(q[j]-mean);
        }
        stdev=sqrt(stdev/(N-1));

        printf("Sum=%d\n",sum);
        printf("Average=%f\n",mean);
        printf("stdev=%f\n",stdev);
        printf("-----------------\n");


        printf("poll\tFreq\tHistogram\n");
        for(int i=0;i<10;i++)
        {
                printf("%d\t%d\t",i,w[i]);
                for(int k=0;k<w[i];k++)
                {
                        printf("*");
                }
                   printf("\n");

        }
        return 0;
}
