#include<stdio.h>
void insertionsort(int arr[],int n){
   
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
        
        

    }
}
int main(){
    int arr[7]={34,5,18,41,3,9,1};
    insertionsort(arr,7);
    printf("the insertion wise sorted array is :\n");
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}