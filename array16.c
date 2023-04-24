#include<stdio.h>
int main(){
    int n;
     printf("ENTER n:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sumeven=0,sumodd=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sumeven=sumeven+a[i];
        }
        else{
            sumodd=sumodd+a[i];
        }
    }
    printf("the difference of the sum of all the elements in the even indices and the odd indices is :%d\n",sumeven-sumodd);
    return 0;
}