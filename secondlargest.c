#include<stdio.h>
#include<limits.h>
int main(){
int a[5]={1,2,3,4,5};
int max,smax;
max=-9;
smax=INT_MIN;
for(int i=0;i<5;i++){
    if(a[i]>max){
        smax=max;
        max=a[i];

    }
    //if(a[i]<max&&a[i]!=smax){
      //  smax=a[i];
    //}
}
printf("second largest:%d\n",smax);
printf("largest : %d\n",max);
return 0;

}
