#include<stdio.h>
int main(){
    printf("TO CHECK WHEATHER THE MATRIX IS SYMMETRIC OR NOT\n");
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
    int count=0;

     for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            if(arr[i][j]==arr[j][i]){
               
                continue;

            } 
            else{
                count++;
            }
            
         }
     }
     if(count==0){
        printf("matrix is symmetric\n");

     }
     else{
        printf("matrix is non symmetric\n");
     }

return 0;
}
