// #include <stdio.h>

// int main()
// {
//     char n;
   
//     printf("Enter Last Alphabet : ");
//     scanf("%c", &n);


//  for (int i = 65; i <= (int)n; i++) {   
//     for(int j = 65;j<=(int)n;j=j+1){
     
//         printf("%c",j);
       
//     } printf("\n");
//     }
//     return 0;
// }





//enter number of rows

// #include <stdio.h>

// int main()
// {
//     int n;
   
//     printf("Enter Number of rows : ");
//     scanf("%d", &n);


//  for (int i = 65; i <= 64+n; i++) {   
//     for(int j = 65;j<=64+n;j=j+1){
     
//         printf("%c",(char)j);
       
//     } printf("\n");
//     }
//     return 0;
// }







#include <stdio.h>

int main()
{
    int n;
   
    printf("Enter Number of rows : ");
    scanf("%d", &n);


 for (int i = 1; i <= n; i++) {   
    int a =1;
    for(int j = 1;j<=n;j=j+1){
     
     int d = a + 64;
     char ch = (char)d;
        printf("%c",ch);
       
    } printf("\n");
    }
    return 0;
}



