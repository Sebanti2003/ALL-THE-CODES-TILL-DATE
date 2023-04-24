#include<stdio.h>
void reverse(int arr[],int b[],int n){
    
    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
        int temp;
        temp=b[j];
        b[j]=arr[i];
        arr[i]=b[j];

    }
}
int main(){

    int arr[6]={4,5,6,7,8,1};
    int b[6];
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
    reverse(arr,b,6);
    for(int i=0;i<6;i++){
        printf("%d ",b[i]);
    }
    return 0;

}
