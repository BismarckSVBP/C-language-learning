#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int nst = 1;
    int nsp = n-1;
    for (int i = 1; i <= n; i++)
    {

        // for (int j = 1; j <=n-i; j++)
        // {
        //     printf("#");
            
            
        // }


for (int j = 1; j <=nsp; j++)
        {
            printf("#");
            
            
        }
        nsp = nsp-1;


//&&




        
   
    //   for (int k = 1; k <= i; k++)
    // {
    //         printf("*");
            
            
    //      }
         
    //           for (int l = 1; l <= i-1; l++)
    // {
    //         printf("%d",l);
            
            
    //      }
         
  



//OR


//    for (int k = 1; k <= (2*i)-1; k++)
//     {
//           printf("%d",k);
            
            
//          }



//OR


   for (int k = 1; k <= nst; k++)
    {
            printf("%d",k);
            
            
         }
         nst = nst+2;


      printf("\n");
    }




    
    return 0;
}
