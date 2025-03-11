// #include<stdio.h>
// int powfnlog(int a,int b){
//     int x;// if(n==0) return 0;
//     if(b==1) return a;
//  x=powfnlog(a,b/2);
// return x*x;

// }

// int main(){
// int m;
//     printf("Enter Base Number :");
//     scanf("%d", &m);
//     int n;
//     printf("Enter Power Number:");
//     scanf("%d", &n);
//     int p= powfnlog(m,n);
//    printf("%d",p);
//     return 0;
// }

// #include <stdio.h>
// int powfnlog(int a, int b)
// {

//     if (b == 1)
//     {
//         return a;
//     }

//     if (b % 2 == 0)
//     {

//         return powfnlog(a, b / 2) * powfnlog(a, b / 2);
//     }
//     else // if (b % 2 != 0 && b != 0)
//     {

//         return a * powfnlog(a, b / 2) * powfnlog(a, b / 2);
//         ;
//     }
// }

// int main()
// {
//     int m;
//     printf("Enter Base Number :");
//     scanf("%d", &m);
//     int n;
//     printf("Enter Power Number:");
//     scanf("%d", &n);

//     int p;

//     p = powfnlog(m, n);

//     printf("%d", p);
//     return 0;
// }

#include <stdio.h>
int powfnlog(int a, int b)
{
    if(b==0) return 1;
    // if (b == 1)
    //     return a;
    int x = powfnlog(a, b / 2);
    if (b % 2 == 0)
    {

        return x * x;
    }
    else
    {

        return a * x * x;
    }
}

int main()
{
    int m;
    printf("Enter Base Number :");
    scanf("%d", &m);
    int n;
    printf("Enter Power Number:");
    scanf("%d", &n);
    int p = powfnlog(m, n);
    printf("%d", p);
    return 0;
}
