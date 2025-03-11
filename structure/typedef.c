#include <stdio.h>

// typedef float realNumber;--> typedef is a macros
int main()
{
    typedef float realNumber;
    int x;
    realNumber y = 9.999;
    float z =98.8;
    printf("%f",y);
    printf("%f",z);
    return 0;
}