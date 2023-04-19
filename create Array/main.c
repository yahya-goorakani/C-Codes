include<stdio.h>

int r=3,c=2;
int main() {

        
        int arr[r][c];
                for(int i=0; i<r; ++i) {
                        for(int j=0; j<c; ++j) {
                                printf("Enter value for array:[%d][%d]:", i, j);
                                scanf("%d",&arr[i][j]);
                        }
                }
printf("Two Dimensional array elements:\n");
                for(int i=0; i<r; ++i) {
                        for(int j=0; j<c; ++j) {
                        printf("[%d][%d]:%d\n\a",i ,j, arr[i][j]);
                        }
                }
printf("\n");
return 0;
}
