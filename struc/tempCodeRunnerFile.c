#include <stdio.h>
#include <string.h>
int main()
{
    typedef union Pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    pokemon a;
    a.attack = 50;
    a.hp = 80;
    a.speed = 90;
    a.tier = 'b';
    strcpy(a.name, "Pikachu");

    printf("%s\n", a.name);
    printf("%d\n", a.attack);
    printf("%d\n", a.hp);
    printf("%d\n", a.speed);
    printf("%c\n", a.tier);
    return 0;
}