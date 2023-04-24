#include<stdio.h>
int squareroot(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid*mid==n){
         return mid;
        }
        if(mid*mid>n){
            e=mid-1;
        }
        if(mid*mid<n){
            ans=mid;

            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double moreprecision(int n,int precision,int squareroot){
    double ans=squareroot;
    double fact=1;
    for(int i=0;i<precision;i++){
        fact=fact/10;
        for(double j=ans;j*j<n;j=j+fact){
            ans=j;
        }
    }
    return ans;
}


int main(){
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
   
    double a;
    int tempsol=squareroot(n);
    a=moreprecision(n,9,tempsol);

    printf("the squareroot is : is %lf",a);
    return 0;
}


