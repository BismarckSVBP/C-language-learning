#include <stdio.h>

int min(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    return y;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int m;
    printf("Enter m :");
    scanf("%d", &m);
    int a = m;
    int b = n;
    int c = 1;

    for (int i = 1; i <= min(m, n); i++)
    {

        if (a % i == 0 && b % i == 0)
        {

            if (a != 0 || b != 0)
            {
                a = a / i;
                b = b / i;
            }
            c = c * i;
        }
    }
    printf("%d", (m * n) / c);
    return 0;
}



































// #include <stdio.h>
// int gcd(int i,int j){
//     if(j==0) return i;
//     else return gcd(j,i%j);
// }
// int main(){
//     int a;
//     printf("Enter first no.");
//     scanf("%d",&a);
//     int b;
//     printf("Enter second no.");
//     scanf("%d",&b);
//     int g=gcd(a,b);
//     int lcm=(a*b)/g;
//     printf("%d",lcm);
// }