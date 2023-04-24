#include<stdio.h>
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start-(start-end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        mid=start-(start-end)/2;
    }
    return -1;

}
int main(){
    int array1[6]={34,54,56,57,87,98};
    int array2[5]={3,7,10,17,89};
    int a=binarysearch(array1,6,54);
    int b=binarysearch(array2,5,10);
   printf("element is  present in the array1 in index %d\n",a);
   printf("element is  present in the array1 in index %d\n",b);



    return 0;
    //we are gonna do binary search.
    
}
