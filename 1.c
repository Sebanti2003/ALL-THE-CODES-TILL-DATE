//program of binary search here as it follows:
#include<stdio.h>
int binarysearch(int arr[],int size,int key){
    int start =0;
    int end=size-1;
    int mid=start - (start-end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        mid=start - (start-end)/2;
        
    }
    return -1;

    
}
int main(){//we should put array in assending order 
    //binary search in the 
    int even[6]={2,4,6,8,12,18};
    int odd[5]={1,8,67,89,90};
    int a,b;
   a= binarysearch(even,6,12);
   b=binarysearch(odd,5,67);
   printf("%d\n",a);
   printf("%d\n",b);


    return 0;

}

