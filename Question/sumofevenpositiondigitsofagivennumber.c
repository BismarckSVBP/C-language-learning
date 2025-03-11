
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    int a=n;
    while (a != 0)
    {
        a = a / 10;
        i++;
    }
    // printf("%d",i);
    int sum = 0;
   
    if (i % 2 != 0)
    { int b = n;
        while (b >9)
        {
            int x = b / 10;
            int y = b / 100;
            y = y * 10;
            int z = x - y;
            sum = sum + z;
            b = b / 100;
            
        }
        printf("%d", sum);
    }
    else
    { int c = n;
        while (c != 0)
        {
            int p = c / 10;
            p = p * 10;

            int x = c - p;
            sum = sum + x;
            c = c / 100;
            
        }
        printf("%d\n", sum);
    }
    return 0;
}
