#include<stdio.h>
// void swap(int *xp,int *yp){
//     int temp;
//     temp=*yp;
//     *yp=*xp;
//     *xp=temp;
// }
int main(){
    printf("PROGRAM OF TRANSPOSE OF A MATRIX\n");
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
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           b[i][j]=arr[j][i];        }
    }
    printf("THE TRANSPOSE OF THE MATRIX IS:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
