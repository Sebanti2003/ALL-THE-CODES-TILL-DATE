#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        sum=sum+(n%10);
        n=n/10;
    }
    printf("the sum of the  digits in the number is %d\n",sum);
    return 0;
}
