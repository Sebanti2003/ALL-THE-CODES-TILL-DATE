//code of bubble sort.
#include<stdio.h>
void swap(int *xp,int *yp){
    int temp;
    temp=*yp;
    *yp=*xp;
    *xp=temp;
}
void bubblesort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

}
int main(){
    int arr[8]={12,23,34,45,56,67,78,89};
    //pass by value hobe so pointers are used 
    bubblesort(arr,8);
    //normally bubble sort was happening in decending order so to make it a ascending one we use all the below steps.!!!!!
    int b[8];
    for(int i=0,j=7;i<8,j>=0;i++,j--){
        
        int temp;
        temp=arr[i];
        arr[i]=b[j];
        b[j]=temp;
    }
    printf("THE SORTED ARRAY IN ASCENDING ORDER IS \n");
    for(int i=0;i<8;i++){
        printf("%d ",b[i]);

    }

    return 0;

}




