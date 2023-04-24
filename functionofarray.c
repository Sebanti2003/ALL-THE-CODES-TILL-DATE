#include<stdio.h>
 void fun(int a[]){
    a[0]=100;

 }
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    printf("%d\n",arr[0]);
    fun(arr);
     printf("%d\n",arr[0]);
     

}
    //void fun(int )
