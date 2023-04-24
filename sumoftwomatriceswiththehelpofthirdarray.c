#include<stdio.h>
int main(){
    printf("wap of adding two matrices:\n");
    int n,m;
    //we are going to print a matrix
    scanf("%d %d",&n,&m);
    int a[n][m];
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int r[n][m];
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
    return 0;


}