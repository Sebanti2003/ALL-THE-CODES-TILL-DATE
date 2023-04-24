#include<stdio.h>
void swap(int *xp,int *yp){
    int temp;
    temp=*yp;
    *yp=*xp;
    *xp=temp;
}
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(&arr[min],&arr[i]);
    }
}
int main(){
    int arr[4]={2,1,6,5};
    //pass by value hobe so pointers are used 
    selectionsort(arr,4);
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}