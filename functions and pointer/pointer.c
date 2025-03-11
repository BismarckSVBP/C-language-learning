//wrong code

// #include<stdio.h>
// void swap(int x, int y){
// int temp = x + y;
//     x = y;
//     y = temp-x;
//     return;//a=9;b=2;
// }
// int main(){
//     int a=2;
//     int b = 9;
//     swap(&a,&b);
//       printf("%d\n",a);//a=2;b=9;
//     printf("%d\n",b);
//     return 0;
// }

















// right code M-1



// #include<stdio.h>
// void swap(int* x, int* y){
// int temp = *x + *y;
//     *x = *y;
//     *y = temp-*x;
//     return;
// }
// int main(){
//     int a=2;
//     int b = 9;
//     swap(&a,&b);
//       printf("%d\n",a);
//     printf("%d\n",b);
//     return 0;
// }












// right code M-2



#include<stdio.h>
int swap(int* x, int* y){
int temp = *x+*y;
    *x=*y;
    *y=temp-*x;
    return *x,*y;
}
int main(){
    int a=2;
    int b = 9;
    swap(&a,&b);
      printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}

