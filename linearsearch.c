#include<stdio.h>
#include<stdbool.h>
bool search(int a[],int size,int key){
    for(int i=0;i<size;i++){
        if(a[i]==key){
            return 1;
            break;
        }

    }
    return 0;

}
int main(){
    printf("enter the size\n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    printf("enter the element you want to search:\n");
    scanf("%d",&key);
    bool found =search(a,n,key);
    if(found){
        printf("the element is present in the array\n");
    }
    else{
        printf("the element is not present in the array.\n");
    }
    printf("THIS IS KNOWN AS LINEAR SEARCH. wo sikhhhh liya tune yayyyyyyyyyyy!!!!!!!!!!!!!!!!\n");
    return 0;
    
}



