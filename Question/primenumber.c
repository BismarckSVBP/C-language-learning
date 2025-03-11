#include <stdio.h>
int main()
{
   int n,a =0;
   printf("Enter a number :");
   scanf("%d", &n);
   for (int i = 2; i <= n - 1; i++)
   {
      if (n % i == 0)
      {
         a = 1;
         break;
      }
   }if(n==1) printf("1 is nor composite & nor a prime number.");
   else if(a==1) printf("%d is a composite number.",n);
else printf("%d is a prime number.",n);
   return 0;
}