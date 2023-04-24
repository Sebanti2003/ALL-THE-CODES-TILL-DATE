#include<stdio.h>
void merge(int arr[],int n,int arr2[],int m,int arr3[] ){
     int i=0,j=0;
     int k=0;
    
    while((i<4)&&(j<3)){
        if(arr[j]<arr[i]){
            arr3[k++]=arr[i++];
            

        }
        else{
            arr3[k++]=arr[j++];
           
        }
    }
     while(i<4){
            arr3[k++]=arr[i++];
        

     }
    while(j<3){
            arr3[k++]=arr2[j++];
        }
        


}
int main(){
    int arr[4]={1,2,3,4};
    int brr[3]={5,6,7};
    int crr[7]={0};
    merge(arr,4,brr,3,crr);
   
        for(int k=0;k<7;k++){
            printf("%d ",crr[k]);
        }
        return 0;
}
