#include<stdio.h>


int main(){
    int a =2;
    int b=9;
    printf("%d\n",a);
    printf("%d\n",b);
    int temp = a+b;
    a=b;
    b=temp-a;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}
