#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    
    int arr[r][c];
    printf("Enter the elements: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("Matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix: \n");
    // -----> In same array

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    // -----> In separate array
    
    // int brr[c][r];
    // for(int i=0;i<c;i++){
    //     for(int j=0;j<r;j++){
    //         brr[i][j] = arr[j][i];
    //     }
    // }
    // for(int i=0;i<c;i++){
    //     for(int j=0;j<r;j++){
    //        printf("%d ",brr[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}