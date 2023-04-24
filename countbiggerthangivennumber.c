#include<stdio.h>
int main(){
    int n,x;
    printf("ENTER x:\n");
    scanf("%d",&x);
    printf("ENTER n:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]>x){
            count++;
        }
    }
    printf("the number of elements greater than the given number %d in the array: %d\n ",x,count);


    return 0;

}
