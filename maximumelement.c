#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE SIZE OF THE ARRAY:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=-1;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];

        }

    }
    printf("the maximum of the elements is %d\n",max);
    return 0;
}