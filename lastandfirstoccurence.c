#include<stdio.h>
int firstocc(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s-(s-e)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
             ans=mid;
            e=mid-1;
            
        }
        else if(arr[mid]<k){
            s=mid+1;


        }
        else if(arr[mid]>k){
            e=mid-1;
            

        }
        mid=s-(s-e)/2;
    }
    return ans;

}
int lastocc(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s-(s-e)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
            
        }
        else if(arr[mid]<k){
            s=mid+1;


        }
        else if(arr[mid]>k){
            e=mid-1;
            

        }
        mid=s-(s-e)/2;
    }
    return ans;

}
int main(){
    int a[8]={1,2,3,4,5,6,6,6};//sorted array
    printf("the first occurence of the element in the array is at index %d\n",firstocc(a,8,6));
    printf("the last occurence of the element in the array is at index %d\n",lastocc(a,8,6));
    return 0;


}