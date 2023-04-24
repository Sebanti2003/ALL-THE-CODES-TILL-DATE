#include<stdio.h>
int main(){
    int n,x;
    printf("ENTER x:\n");
    scanf("%d",&x);
    printf("ENTER n:\n");
    scanf("%d",&n);
    int a[n];
    int nooftriplets=0;
    printf("enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int z=j+1;z<n;z++){
                if((a[i]+a[j]+a[z])==x){
                nooftriplets++;
            }

            }
            
        }
    }
    printf("the no of triplets are : %d\n",nooftriplets);
    return 0;
}
