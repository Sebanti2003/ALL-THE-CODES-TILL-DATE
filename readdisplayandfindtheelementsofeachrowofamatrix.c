#include<stdio.h>
int main(){
    int n,m;
    //we are going to print a matrix
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int a,b;
    printf("we want a and b rows to be rotate\n");
    scanf("%d %d",&a,&b);
    printf("the matrix of elements is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }
    printf("after rotating by %d and %d rows :",a,b);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            
        }
        printf("\n");
    }


   /* printf("the matrix of elements is:\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }
    printf("the sum of the elements in the each row of each matrix is :\n");
    int k;
  // int  sum =0;
   for(k=0;k<n;k++){
    for(int i=0;i<n;i++){
        int  sum =0;
    for(int j=0;j<m;j++){
        sum=sum+a[i][j];
       
        
           
            
        }
        printf("the sum of the %d th row is : %d\n",i,sum);
        printf("\n");
    }
    */


    return 0;


}



