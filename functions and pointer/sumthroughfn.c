
#include <stdio.h>

int add(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int n, m;
    printf("Enter 1st Number : ");
    scanf("%d", &n);

    printf("Enter 2nd Number : ");
    scanf("%d", &m);

    int sum = add(m, n);
    printf("The sum of %d & %d is %d.", n, m, sum);
    return 0;
}
