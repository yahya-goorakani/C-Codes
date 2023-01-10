#include<stdio.h>
#include<stdlib.h>

void bin(unsigned n)
{
    unsigned same_num = n;
    unsigned bit_count = 0;
    while(same_num > 0){
        bit_count++;
        same_num >>= 1;
    }
    
    same_num = n;
    unsigned mask = 1 << (bit_count - 1);
//    printf("main binary: ");
    while (mask > 0){
        unsigned bit = (same_num & mask);
        printf("%d", bit == mask);
        mask >>= 1;
    }
    
    int lsb = 0;
    for (int i = 0; i < bit_count; i++){
        printf("\n");
        if((same_num & 1) == 1){
            lsb = 1;
        }
        same_num >>= 1;
        mask = 1 << (bit_count - 1);
        if(lsb){
            same_num |= mask;
            lsb = 0;
        }
        

//        printf("shifted binary: ");
        while (mask > 0){
            unsigned bit = (same_num & mask);
            printf("%d", bit == mask);
            mask >>= 1;
        }
    }
}

int main(void)
{

    int g;
    printf("enter a integer:\t");
    scanf("%d",&g);
    bin(g);
    printf("\n");


return 0;
}