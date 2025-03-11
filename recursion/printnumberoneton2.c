#include <stdio.h>

void incresing(int n){
  if (n==0) return;//base case
    
    incresing(n-1);
    printf("%d\n",n);
        return ;
}
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d", &n);
    incresing(n);
    
    return 0;
}
