
#include <stdio.h>

int main()
{
    int a;
    printf("Enter Base Number : ");
    scanf("%d", &a);
    int b;
    printf("Enter Power Number : ");
    scanf("%d", &b);
       int p=1;
    for(int i=1;i<=b;i++){
     p = p*a;

    }
    printf("%d",p);
    
    return 0;
}
