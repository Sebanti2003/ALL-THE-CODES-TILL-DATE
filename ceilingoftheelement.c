#include<stdio.h>
int ceiling(int arr[],int size,int element){
    int start=0;
    int end=size -1;
    int mid=start-(start-end)/2;
    while(start<=end){
        if(arr[mid]==element){
            return mid;

        }
        if(arr[mid]>element){
            end=mid-1;
        }
        if(arr[mid]<element){
            start=mid+1;
        }
        mid=start-(start-end)/2;

    }
    return (mid);

}
int main(){
    //program of ceiling of element.
    int a[7]={2,56,61,78,89,90,98};
   int b=ceiling(a,7,81);
   int b1=ceiling(a,7,92);
   int b2=ceiling(a,7,60);
   int b3=ceiling(a,7,1);
   int b4=ceiling(a,7,45);
   int b5=ceiling(a,7,63);
   printf("the ceiling of the element at the index %d\n",b);
    printf("the ceiling of the element at the index %d\n",b1);
     printf("the ceiling of the element at the index %d\n",b2);
      printf("the ceiling of the element at the index %d\n",b3);
       printf("the ceiling of the element at the index %d\n",b4);
        printf("the ceiling of the element at the index %d\n",b5);
   return 0;
    }




    