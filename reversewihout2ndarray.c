#include<stdio.h>
void reverse(int a[],int n){
    int temp;
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return;
    


}
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n];
     printf("enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf(" the elements of the array:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);

    }
    reverse(arr,n);
    printf(" the elements of the modified array:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);

    }
    


    return 0;

}