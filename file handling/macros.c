#include <stdio.h>

#define PI 3.14159265359
float area(float r)
{
    return PI * r * r;
}
#define AREA(r) (PI * r * r)

int main()
{
    // printf("%f",PI);
    printf("%.11f", PI);
    printf("\n%f", area(5.8));
    printf("\n%f", AREA(5.7));
    return 0;
}
