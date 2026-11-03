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
    int sum = 0;
    printf("The matrix is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }
    printf("The sum of the elements is: %d", sum);
    return 0;
}