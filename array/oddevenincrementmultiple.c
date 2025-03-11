#include<stdio.h>

int main(){
    int arr[7]={3,25,37,13,64,76,84};
    for(int i=0;i<7;i++){
        if(i%2!=0){
            // arr[i]=arr[i]*2;
            arr[i]*=2;
        }
        else{
            arr[i]=arr[i]+10;
        }
        printf("%d,",arr[i]);
    }
    return 0;
}