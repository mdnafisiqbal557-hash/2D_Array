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
    int max = arr[0][0];
    int min = arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
        printf("\n");
    }
    printf("The maximum element is: %d",max);
    printf("\nThe minimum element is: %d",min);
    return 0;
}