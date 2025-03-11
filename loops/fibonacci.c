

// by me

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
// int v1 = 1,v2 = 1,sum=0,i;

// if(i ==1){
// printf("%d",v1);
// }
// else if(i ==2){
//     printf("%d",v2);
// }
// else {
// for( i= 3 ; i<=n;i++){
//     sum = v1 + v2;
//     v1 = v2 ;
//     v2 = sum;
// }
// printf("%d",sum);
// }
//     return 0;
// }

// by master

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
// int v1 = 1,v2 = 1,sum=1,i;

// for( i= 1 ; i<=n-2;i++){
//     sum = v1 + v2;
//     v1 = v2 ;
//     v2 = sum;
// }
// printf("%d",sum);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
// int v1 = 1,v2 = 1,sum=1,i;

// for( i= 3 ; i<=n-2;i++){
//     sum = v1 + v2;

//     printf("The %d number of fibonacci series is %d\n",i,sum);
//     v1 = v2 ;
//     v2 = sum;
// }

//     return 0;
// }

// by me

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int v1 = 1, v2 = 1, sum = 0, i;

    if (i == 1)
    {
        printf("The %dst number of fibonacci series is %d\n", 1, v1);
    }
    else if (i == 2)
    {
        printf("The %dst number of fibonacci series is %d\n", 1, v1);
        printf("The %dnd number of fibonacci series is %d\n", 2, v2);
    }
    else
    {
        printf("The %dst number of fibonacci series is %d\n", 1, v1);
        printf("The %dnd number of fibonacci series is %d\n", 2, v2);
        for (i = 3; i <= n; i++)
        {
            sum = v1 + v2;

            printf("The %dth number of fibonacci series is %d\n", i, sum);
            v1 = v2;
            v2 = sum;
        }
    }
    return 0;
}
