// #include <stdio.h>
// int printnumber(int n)
// {
//     if (n==1) return 1;//base case
//     printf("%d\n",n);
//     printnumber(n-1);
//         return 1;
// }
// int main()
// {
//     int n;
//     printf("Enter A Number : ");
//     scanf("%d", &n);
//    int a= printnumber(n);
//     printf("%d",a);
//     return 0;
// }

#include <stdio.h>

void printnumber(int n)
{
    if (n == 0)
        return; // base case
    printf("%d\n",n);
    printnumber(n - 1);
    return;
}
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d", &n);
    printnumber(n);

    return 0;
}
