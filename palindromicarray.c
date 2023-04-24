//palindromic array it is or not
#include<stdio.h>
#include<stdbool.h>
bool palindromicornot(int a[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        if(a[i]==a[j]){
            return 1;
            continue;
          }
          else{
            return 0;
            break;
          }
    }

}
int main(){
    int a[6]={1,2,3,3,2,1};
    int m=palindromicornot(a,6);
    if(m==0){
        printf("it is not palindromic\n");
    }
    else{
        printf("it is palindromic\n");

    }
    return 0;


}

