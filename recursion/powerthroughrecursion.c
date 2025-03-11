#include <stdio.h>

int powe(int x,int y){
if(y==0){return 1;}
int power = x*powe(x,y-1);
return power;

}
int main()
{
  int m;
    printf("Enter Base Number :");
    scanf("%d", &m);
    int n;
    printf("Enter Power Number:");
    scanf("%d", &n);
  
   int p= powe(m,n);
   printf("%d",p);
    return 0;
}