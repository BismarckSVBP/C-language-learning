#include <stdio.h>
void printnumber(int x,int n)
{
    if (x>n) return;//base case
    printf("%d\n",x);
    printnumber(x+1,n);
        return;
}
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d", &n);
printnumber(1,n);
  
    return 0;
}
