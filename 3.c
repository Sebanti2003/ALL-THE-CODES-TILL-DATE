//write a program to store roll number and marks obtained by 4 students side by side in a matrix
#include<stdio.h>
int main(){
    int n,m;
    n=4;
    printf("enter how many types of data you want :\n");
    scanf("%d",&m);
    int a[4][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;

    }