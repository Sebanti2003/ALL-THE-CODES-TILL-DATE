#include<stdio.h>
int main(){
    int n;
    printf("PROGRAM OF SUM OF ELEMENTS OF THE ARRAY\n");
    printf("ENTER the size of the array:\n");
    scanf("%d",&n);
    int a[n];
    int sum=0;
    printf("ENTER THE ELEMENTS OF THE ARRAY\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("THE SUM OF ALL THE ELEMENTS OF THE ARRAY IS : %d\n",sum);
    return 0;



    //return 0;
}