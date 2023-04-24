
        else{

        }
        mid=s-(s-e)/2;
    }
    return -1;
    
}
int main(){
    int array[4]={4,9,1,2};
    int a;
    a=pivot(array,4);
    printf("the mountain element is at index : %d\n",a);
    return 0;
    
