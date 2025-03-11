#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
   int multiple = 1;

    for (int i = 1; i <= n; i = i + 1)
    {
        multiple =  multiple*i;
        printf("%d! = %d\n",i,multiple);
        }

   
    return 0;
}