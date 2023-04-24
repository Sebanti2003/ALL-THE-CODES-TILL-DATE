#include<stdio.h>
int main(){
   /* int a[5]={4,3,7,5};//index means 0,1,2,3,4
   // a[5]=100;
   printf("%d\n",a[-1]);
    for(int i=0;i<5;i++){
        printf("%d is the elements for a[%d]\n",a[i],i);
    }
    */
   printf("write a program to take input and print output of the array\n");
   //printf("enter the elements:\n");
   int n;
   printf("enter size of the array:\n");
   scanf("%d",&n);
   int a[n];
   printf("enter the elements:\n");

   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);



   }
   for(int i=0;i<n;i++){
    printf("The element of array of a[%d] is %d\n",i,a[i]);



   }


   


    return 0;
}

