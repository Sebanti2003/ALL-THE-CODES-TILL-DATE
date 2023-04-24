//using binary search 
#include<stdio.h>
int firstocc(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        if(arr[mid]<k){
            s=mid +1;

        }
        if(arr[mid]>k){
            e=mid-1;
        }
        mid =s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        if(arr[mid]<k){
            s=mid +1;

        }
        if(arr[mid]>k){
            e=mid-1;
        }
        mid =s+(e-s)/2;
    }
    return ans;
}
int main(){
    int a[9]={4,5,6,7,7,7,7,7,9};
    int c,b;
    b=firstocc(a,9,7);
    c=lastocc(a,9,7);
    printf("the first occurence of 7 happens at the index at %d\n",b);
    printf("the last occurence of 7 happens at the index at %d\n",c);
    printf("the no. of occurence of 7 in the array is %d\n",c-b+1);
    return 0;
}
