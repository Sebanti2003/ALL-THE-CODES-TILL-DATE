#include<stdio.h>
int main(){
    printf("ADDITION OF TWO MATRICES\n");
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
     
     
    int c[m][n];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
           c[i][j]=arr[i][j]+b[i][j];
    }
    printf("THE SUM OF TWO MATRICES IS:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
           printf("%d ",c[i][j]);
        
        printf("\n");
    }
    return 0;


     


}
