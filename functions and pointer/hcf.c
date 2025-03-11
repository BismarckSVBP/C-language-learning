#include <stdio.h>
int min(int a, int b)
{
    if (a >= b)
        return b;
    else
        return a;
}
int main()
{
    int a, b;

    printf("Enter 1st Number : ");
    scanf("%d", &a);

    printf("Enter 2nd Number : ");
    scanf("%d", &b);
int x;
    for (int i = 1; i <= min(a, b); i++)
    {
        

        if (a % i == 0 && b % i == 0)
        {
            x = i;
        }
     
    }   printf("%d\n", x);

    return 0;
}