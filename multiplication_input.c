#include<stdio.h>
int main(){
    int m;
    printf("Enter no of rows of 1st matrix: ");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns of 1st matrix: ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int p;
    printf("Enter no of rows of 2nd matrix: ");
    scanf("%d",&p);
    int q;
    printf("Enter no of columns of 2nd matrix: ");
    scanf("%d",&q);
    int arr2[p][q];
    printf("Enter the elements: ");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    if(n!=p){
        printf("Multiplication cannot be done");
        return 1;
    }
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j] = 0;
            for(int k=0;k<n;k++){
                res[i][j] += arr[i][k]*arr2[k][j];
            }
        }
    }
    printf("The multiplication: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}