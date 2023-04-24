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
   // int a[n];
    int b[n];
    printf("THE ELEMENTS OF THE EARLIER ARRAY IS :\n");
    for(int i=0;i<n;i++){
        printf("the element of a[%d]th element is %d\n",i,a[i]);
    }

    
    for(int i=0;i<n;i++){
        b[i]=a[n-i-1];
    }
    printf("THE ELEMENTS OF THE REVERSE ARRAY IS :\n");
    for(int i=0;i<n;i++){
        printf("the element of b[%d]th element of the reverse array is %d\n",i,b[i]);
    }
    return 0;


}


