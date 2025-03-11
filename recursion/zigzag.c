#include<stdio.h>


void zigzag(int n){
    if(n == 0) return;
    printf("%d ",n);
    zigzag(n-1);
    
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    return;
}
int main(){
    int x;
    printf("Enter a Number :");
    scanf("%d",&x);
zigzag(x);
   
    return 0;
}