#include<stdio.h>
int mountain(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s-(s-e)/2;
    }
    return mid;
    
}
int main(){
    int array[4]={4,9,7,1};
    int a;
    a=mountain(array,4);
    printf("the mountain element is at index : %d\n",a);
    return 0;
    

}
