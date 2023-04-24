#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    printf("the no. of digits in the number is %d\n",count);
    return 0;
}