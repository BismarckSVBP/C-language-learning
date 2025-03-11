#include <stdio.h>
#include <string.h>
int main()
{
    // simple example

    // struct pul
    // {
    //     int rollno;
    //     long long int mobileno;
    //     char section;
    // };
    // struct pul abhay;
    // abhay.rollno = 2;
    // abhay.mobileno = 9793507483;
    // abhay.section = 'A';
    // printf("%lld",abhay.mobileno);

    // decleration of multiple variable

    struct pul
    {
        int rollno;
        long long int mobileno;
        char section;
        char name[15];
    } ram, shyam;

    ram.rollno = 22;
    ram.mobileno = 9993507483;
    ram.section = 'b';
    strcpy(ram.name, "ABHAY");
    printf("%lld", ram.mobileno);

    shyam.rollno = 10;
    shyam.mobileno = 9893507483;
    shyam.section = 'c';
    strcpy(shyam.name, "Anuj");
    printf("\n%lld", shyam.mobileno);

    // other way to intialise -->> but in this we should take care order of the decleration of elements
    struct pul ghanshyam = {35, 9294929439, 'C', "vishal"};
    printf("\n%d", ghanshyam.rollno);
    printf("\n%lld", ghanshyam.mobileno);
    printf("\n%c", ghanshyam.section);
    printf("\n%s", ghanshyam.name);

    return 0;
}