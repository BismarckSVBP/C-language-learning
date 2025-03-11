#include <stdio.h>
#include <string.h>

// globally declear karne par hi function main access kar sakte hai

int main()

{
    struct Pokemon
    {

        int attack;
        int hp;
        int speed;
        char tier;
        char name[15];
    };

    struct Pokemon a;
    a.attack = 50;
    a.hp = 80;
    a.speed = 90;
    a.tier = 'b';

    strcpy(a.name, "Pikachu");
    struct Pokemon *b = &a;

    printf("%s\n", b->name);
    printf("%p\n", &a);

    printf("%p\n", &a.attack);
    printf("%p\n", &a.hp);
    printf("%p\n", &a.speed);
    printf("%p\n", &a.tier);
    printf("%p\n", a.name);
    return 0;
}