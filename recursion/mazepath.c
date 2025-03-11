//////with two variable

// // #include <stdio.h>
// // int mazepath(int m, int n)
// // {

// //     if (m == 1 || n == 1)
// //         return 1;
// //     return mazepath(m - 1, n) + mazepath(m, n - 1);
// // }

// // int main()
// // {
// //     int m;
// //     printf("Enter Number of rows :");
// //     scanf("%d", &m);
// //     int n;
// //     printf("Enter Number of columns:");
// //     scanf("%d", &n);
// //     int p = mazepath(m, n);
// //     printf("%d", p);
// //     return 0;
// // }

////with four variable (method-1)

// #include <stdio.h>

// int mazepath(int cr, int cc, int er, int ec)
// {
//     int downways = 0;
//     int rightways = 0;
//     if (cr == er && cc == ec)
//         return 1;
//     if (cr == er)
//     {
//         rightways += mazepath(cr, cc + 1, er, ec);
//     }

//     if (cc == ec)
//     {
//         downways += mazepath(cr + 1, cc, er, ec);
//     }
//     if (cr < er && cc < ec)
//     {

//         downways += mazepath(cr + 1, cc, er, ec);
//         rightways += mazepath(cr, cc + 1, er, ec);
//     }

//     int totalways = rightways + downways;
//     return totalways;
// }

// int main()
// {
//     int rf;
//     // printf("Enter current rows :");
//     // scanf("%d", &rf);
//     int cf;
//     // printf("Enter current columns:");
//     // scanf("%d", &cf);
//     int rl;
//     printf("Enter ending rows :");
//     scanf("%d", &rl);
//     int cl;
//     printf("Enter ending columns:");
//     scanf("%d", &cl);
//     int p = mazepath(1, 1, rl, cl);
//     printf("%d", p);
//     return 0;
// }

// ////with four variable (method-2) & extra things
// #include <stdio.h>

// int mazepath(int cr, int cc, int er, int ec)
// {
//     int downways = 0;
//     int rightways = 0;
//     if (cr == er && cc == ec)
//         return 1;
//     if (cr == er)
//     {
//         rightways += mazepath(cr, cc + 1, er, ec);
//     }

//     if (cc == ec)
//     {
//         downways += mazepath(cr + 1, cc, er, ec);
//     }
//     if (cr < er && cc < ec)
//     {

//         downways += mazepath(cr + 1, cc, er, ec);
//         rightways += mazepath(cr, cc + 1, er, ec);
//     }

//     int totalways = rightways + downways;
//     return totalways;
// }

// int main()
// {
//     int rf;
//     printf("Enter current rows :");
//     scanf("%d", &rf);
//     int cf;
//     printf("Enter current columns:");
//     scanf("%d", &cf);
//     int rl;
//     printf("Enter ending rows :");
//     scanf("%d", &rl);
//     int cl;
//     printf("Enter ending columns:");
//     scanf("%d", &cl);
//     if (rf <= rl && cf <= cl)
//     {
//         int p = mazepath(rf, cf, rl, cl);
//         printf("%d", p);
//     }
//     else
//     {
//         printf("The value of cuurent row must be equal or grater than the ending row & also The value of cuurent coloumn must be equal or grater than the ending coloumn. ");
//     }
//     return 0;
// }

#include <stdio.h>

int mazepath(int er, int ec)
{
    int downways = 0;
    int rightways = 0;
    if (er == 1 && ec == 1)
        return 1;
    if (er == 1)
    {
        rightways += mazepath(er, ec - 1);
    }

    if (ec == 1)
    {
        downways += mazepath(er - 1, ec);
    }
    if (er > 1 && ec > 1)
    {

        downways += mazepath(er - 1, ec);
        rightways += mazepath(er, ec - 1);
    }

    int totalways = rightways + downways;
    return totalways;
}

int main()
{

    int rl;
    printf("Enter ending rows :");
    scanf("%d", &rl);
    int cl;
    printf("Enter ending columns:");
    scanf("%d", &cl);

    int p = mazepath(rl, cl);
    printf("%d", p);

    return 0;
}
