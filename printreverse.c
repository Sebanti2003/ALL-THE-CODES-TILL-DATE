#include<stdio.h>
int main(){
    printf("program of reverse printing\n");
    int n;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The reverse printing of the program is:\n");
    for(int i=n-1;i>=0;i--){
        printf("%d\n",a[i]);

    }
    return 0;

}

