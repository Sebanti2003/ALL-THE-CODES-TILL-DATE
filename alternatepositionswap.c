//program of alternate swap
#include<stdio.h>
int main(){
    printf("program of swapping alternate elements in the array\n");
    int n;
    printf("ENTER n:\n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS OF THE ARRAY:\n");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Before swapping the alternate elements the previous array is :\n");
    for(int i=0;i<n;i++){
        printf("THE a[%d] TH ELEMENT OF THE ARRAY IS %d\n",i,a[i]);
       // scanf("%d",&a[i]);
    }
    if(n%2==0){
    for(int i=0;i<n;i=i+2){
        
        int temp;
        temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;
    }
    }
    else{
        for (int i = 0; i <n; i=i+2)
        {
            if(i!=n-1){
                
        
        int temp;
        temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;


            
            }
            else{
                a[n-1]=a[n-1];
               // break;
            }
            
        }
        
    }
    
    for(int i=0;i<n;i++){
        printf("THE a[%d] TH ELEMENT OF THE  MODIFIED ARRAY IS %d\n",i,a[i]);
       // scanf("%d",&a[i]);
    }
    return 0;
    

}