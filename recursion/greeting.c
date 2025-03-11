#include <stdio.h>

void greeting(int n){
  if (n==0) return;//base case
    printf("hello\n");
    greeting(n-1);
        return ;
}
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d", &n);
    // int a = greeting(n);//wrong way in case of void 
    greeting(n);
    
    return 0;
}
