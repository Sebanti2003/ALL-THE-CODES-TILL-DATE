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
    int min=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];

        }

    }
    printf("the minimum of the elements is %d\n",min);
    return 0;
}