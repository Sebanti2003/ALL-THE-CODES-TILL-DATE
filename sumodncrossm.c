#include<stdio.h>
int main(){
     printf("the sum of the given matrix:\n");
    int n,m;
    int sum=0; 
    //we are going to print a matrix
    scanf("%d %d",&n,&m);
    int a[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         scanf("%d",&b[i][j]);
    //     }
    // }
    /*int r[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            r[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",r[i][j]);
        }
        printf("\n");
    }
    */
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+a[i][j];
        }
    }
    printf("THE SUM OF THE GIVEN MATRIX IS : %d\n",sum);
    return 0;
}