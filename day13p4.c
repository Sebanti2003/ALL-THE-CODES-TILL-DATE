#include<stdio.h>
int main(){
    printf("MULTIPLICATION OF TWO MATRICES\n");
     printf("ENTER THE ROW OF THE MATRIX:\n");
    int m,n;
    scanf("%d",&m);
    printf("ENTER THE COLOUMN OF A MATRIX\n");
    scanf("%d",&n);
    int arr[m][n];
    printf("ENTER THE ELEMENTS OF THE ARRAY\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
           printf("%d ",arr[i][j]);
        
        printf("\n");
    }
    int b[m][n];
    printf("ENTER THE ELEMENTS OF THE ARRAY\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
           printf("%d ",b[i][j]);
        
        printf("\n");
    }
    int prod[m][n];
    for(int i=0;i<m;i++){
        
        
        for(int j=0;j<n;j++){
             prod[i][j]=0;
            for(int k=0;k<n;k++){
            prod[i][j]+=arr[i][k]*b[k][j];
            }



        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
           printf("%d ",prod[i][j]);
        
        printf("\n");
    }


}