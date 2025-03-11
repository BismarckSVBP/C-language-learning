// #include<stdio.h>
// int main(){
//    char x ='9';
//  printf("%c",x);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//    int a = 300,b,c;
//    if(a>400)
//    b =300;
//    c =200;
//    printf("\n%d\n%d",b,c);

//     return 0;
// }
// #include<stdio.h>
// int main(){
//    int a;
//    printf("Enter a number :") ;
//    scanf("%d",&a);

// for(int i=1;i<=a;i++){
//      printf("\n hello world");}

//     return 0;
// }

// #include<stdio.h>
// int main(){
//    int a;
//    printf("Enter a number :") ;
//    scanf("%d",&a);

// for(int i=1;i<=a;i++){
//    if(i % 2==0){
//            printf("\n %d",i);
//    }
// }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//    int a;
//    printf("Enter a number :") ;
//    scanf("%d",&a);

// for(int i=1;i<=a;i++){
//    if(i % 19==0){
//            printf("\n %d",i);
//    }
// }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//    int a;
//    printf("Enter a number :") ;
//    scanf("%d",&a);

// for(int i=1;i<=2*a-1;i=i+2){
//  printf("\n %d",i);
// }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//    int a =1,n;
//    printf("Enter a number :") ;
//    scanf("%d",&n);

// for(int i=1;i<=n;i=i+1){
//    a = a*2;
//  printf("\n %d",a);
// }
//   return 0;
// }

// #include<stdio.h>
// int main(){
//    int a =3,n;
//    printf("Enter a number :") ;
//    scanf("%d",&n);

// for(int i=1;i<=n;i=i+1){

//  printf("\n %d",a);
//  a = a*4;
// }
//   return 0;
// }

// #include<stdio.h>
// int main(){
//    int a =100,n;
//    printf("Enter a number :") ;
//    scanf("%d",&n);

// for(int i=1;i<=n;i=i+1){
//    if(a>0){
//       printf("\n %d",a);
//       a = a-3;}

// }
//   return 0;
// }

// #include<stdio.h>
// int main(){
//    int a =100,n;
//    printf("Enter a number :") ;
//    scanf("%d",&n);

// for(int i=1;a>87;i=i+1){

//  printf("\n %d",a);
//  a = a-3;
// }
//   return 0;
// }

#include <stdio.h>
int main()
{
   int n;
   printf("Enter a number :");
   scanf("%d", &n);
   for (int i = 2; i <= n - 1; i++)
   {
      if (n % i == 0)
      {
         printf("This is not a prime number.");
      }
   }

   return 0;
}
