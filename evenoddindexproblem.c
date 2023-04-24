#include<stdio.h>
int main(){
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        

    }
    printf("printing all the elements of the earlier array is:\n");
    for(int i=0;i<n;i++){
        printf("the element %dth of the earlier array is : %d \n",i,a[i]);
        

    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            a[i]=a[i]+10;
        }
        else{
            a[i]=a[i]*2;
        }
        //scanf("%d",&a[i]);
        

    }
    printf("printing all the elements of the modified array is:\n");
    for(int i=0;i<n;i++){
        printf("the element %dth of the modified array is : %d \n",i,a[i]);
        

    }

    return 0;
}