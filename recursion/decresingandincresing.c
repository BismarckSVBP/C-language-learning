#include <stdio.h>

void fn(int n){
  if (n==0) return;//base case
    printf("%d\n",n);
    fn(n-1);
    printf("%d\n",n);
        return ;
}
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d", &n);
    fn(n);
    
    return 0;
}
