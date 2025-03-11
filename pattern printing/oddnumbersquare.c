#include <stdio.h>

int main()
{
    int m, n;
   
    printf("Enter number of Rows : ");
    scanf("%d", &n);

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= n; j++)
    //     {
    //         printf("%d",2*j-1);
    //     }
    //     printf("\n");
    // }

//  for (int i = 1; i <= n; i++)
//     {   int a =1;
//     for(int j = 1;j<=n;j++){
     
//         printf("%d",a);
//         a = a+2;
//     } printf("\n");
//     }


 for (int i = 1; i <= n; i++) {   
    for(int j = 1;j<=2*n-1;j=j+2){
     
        printf("%d",j);
       
    } printf("\n");
    }
    return 0;
}
