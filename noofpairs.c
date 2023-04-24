#include<stdio.h>
int main(){
    int n,x;
    printf("ENTER x:\n");
    scanf("%d",&x);
    printf("ENTER n:\n");
    scanf("%d",&n);
    int a[n];
    int noofpairs=0;
    printf("enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if((a[i]+a[j])==x){
                noofpairs++;
            }
        }
    }
    printf("the no of pairs are : %d\n",noofpairs);
    return 0;
}