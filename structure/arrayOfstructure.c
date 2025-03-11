#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct Pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    pokemon a, b, c;
    a.attack = 50;
    a.hp = 80;
    a.speed = 90;
    a.tier = 'b';
    strcpy(a.name, "Pikachu");
    printf("%d\n", a.attack);
    printf("%d\n", a.hp);
    printf("%d\n", a.speed);
    printf("%c\n", a.tier);
    printf("%s\n", a.name);


    //deep copy
    b = a;
    b.speed = 20;
    printf("%d\n", b.attack);
    printf("%d\n", b.hp);
    printf("%d\n", b.speed);
    printf("%c\n", b.tier);
    printf("%s\n", b.name);
    return 0;
}