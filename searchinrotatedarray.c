#include<stdio.h>
int pivotofarray(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s + (e-s)/2;
    }
    return mid;
}
int binarysearch(int arr[],int n,int s,int e,int k){
    s=0;
    e=n-1;
    int mid=s-(s-e)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]<k){
            s=mid+1;
        }
        if(arr[mid]>k){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int found(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    int pivot=pivotofarray(arr,n);
    while(s<e){
       
        if((arr[pivot]<=k)&&(k<arr[e])){
            
            return binarysearch(arr,n,pivot,e,k);
        }
        else{
            return binarysearch(arr,n,0,pivot-1,k);
           
        }
        mid=s+(e-s)/2;
         
    }
    return mid;
}


//find the pivot.
int main(){
    int a[5]={7,9,1,2,3};
    printf("PROGRAM OF SEARCH IN A ROTATED ARRAY:\n");
    int pivot=pivotofarray(a,5);
    int f=found(a,5,3);
    printf("at index %d",f);

    // int pivot=pivotofarray(a,9);
    // printf("PIVOT IS AT INDEX %d",pivot);

    return 0;

}

