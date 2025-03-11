#include <stdio.h>
#include <string.h>
int main()
{
    // // simple way to intialise array

    // struct book
    // {
    //     int noOfpages;
    //     float price;
    //     char name[89];
    // } a, b, c;
    // a.name[0] = 'P';
    // a.name[1] = 'H';
    // a.name[2] = 'Y';
    // a.name[3] = 'S';
    // a.name[4] = 'I';
    // a.name[5] = 'C';
    // a.name[6] = 'S';
    // a.noOfpages = 249;
    // a.price = 45.9;
    // printf("\n%d", a.noOfpages);
    // printf("\n%f", a.price);
    // printf("\n%s", a.name);   // --> result have some garbage value

    // // another way to intialise char array

    // strcpy(b.name, "Chemistry");
    // b.noOfpages = 2479;
    // b.price = 456.9;
    // printf("\n%d", b.noOfpages);
    // printf("\n%f", b.price);
    // printf("\n%s", b.name);

    // intialise array by Macros

    typedef struct book
    {
        int noOfpages;
        float price;
        char name[89];
    } ABHAY;
    ABHAY a;
    ABHAY b;
    ABHAY c;
    a.name[0] = 'P';
    a.name[1] = 'H';
    a.name[2] = 'Y';
    a.name[3] = 'S';
    a.name[4] = 'I';
    a.name[5] = 'C';
    a.name[6] = 'S';
    a.noOfpages = 249;
    a.price = 45.9;
    printf("\n%d", a.noOfpages);
    printf("\n%f", a.price);
    printf("\n%s", a.name); // --> result have some garbage value

    // another way to intialise char array

    strcpy(b.name, "Chemistry");
    b.noOfpages = 2479;
    b.price = 456.9;
    printf("\n%d", b.noOfpages);
    printf("\n%f", b.price);
    printf("\n%s", b.name);
    return 0;
}