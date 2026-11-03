#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    int n;
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    
    int arr[m][n];
    printf("Enter the elements: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("The matrix is: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
    int total = m*n;
    int count = 0;
    printf("\nSpiral printing: \n");
    while(count<total){
        // print minimum row
        for(int j=minc;j<=maxc;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        if(count>=total){
            break;
        }
        // print maximum column
        for(int i=minr;i<=maxr;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=total){
            break;
        }
        // print maximum row
        for(int j=maxc;j>=minc;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=total){
            break;
        }
        // print minimum column
        for(int i=maxr;i>=minr;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
        if(count>=total){
            break;
        }
    }
    return 0;
}