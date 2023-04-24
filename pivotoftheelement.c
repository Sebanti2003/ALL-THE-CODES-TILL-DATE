#include<stdio.h>
int pivot(int arr[],int n){
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
        mid=s-(s-e)/2;
    }
    return mid;
    
}
int main(){
    int array[4]={4,9,1,2};
    int a;
    a=pivot(array,4);
    printf("the pivot element is at index : %d\n",a);
    return 0;
    
    

}

