#include<stdio.h>
int found(int a[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(a[mid]==k){
            return mid;
        }
        if(a[mid]<k){
            s=mid + 1;
        }
        if(a[mid]>k){
            e=mid-1;
        }

    }
    return -1;
}
int main(){
    int arr[10]={2,4,6,8,9,12,34,36,43,45};
    int a;
    a=found(arr,10,36);
    printf("%d\n",a);
    return 0;

}