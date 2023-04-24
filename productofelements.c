#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d",&n);
    int prod=1;
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        prod=prod*arr[i];
    }
    printf("THE PRODUCT OF THE ELEMENTS OF THE ARRAY: %d \n",prod);
    return 0;

}