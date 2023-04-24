#include<stdio.h>
int main(){
    printf("program 3:\n");
    int n;
    printf("Enter the class strenght:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the marks of the respective student:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    for(int i=0;i<n;i++){
        //scanf("%d",&a[i]);
        if(a[i]<35){
            printf("The roll number that got marks under 35 is : %d\n",i);
        }
        
    }
    return 0;
    
}

