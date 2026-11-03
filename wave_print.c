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
    printf("The wave print of matrix: \n");
    // 1 2 3      1 2 3 
    // 4 5 6 ---> 6 5 4
    // 7 8 9      7 8 9
    // 2 4 6      6 4 2
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}