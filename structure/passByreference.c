#include <stdio.h>
#include <string.h>

// globally declear karne par hi function main access kar sakte hai
typedef struct Pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;
void fun(pokemon *d)
{
    (*d).attack = 150;
    d->hp = 800;
    d->speed = 900;
    (*d).tier = 'A';
    strcpy((*d).name, "Mintwo");

    return;
};
int main()

{

    pokemon a;
    a.attack = 50;
    a.hp = 80;
    a.speed = 90;
    a.tier = 'b';
    strcpy(a.name, "Pikachu");
    printf("%d\n", a.attack);
    printf("%d\n", a.hp);
    printf("%d\n", a.speed);
    printf("%d\n", a.tier);
    printf("%s\n", a.name);
    fun(&a);
    printf("%d\n", a.attack);
    printf("%d\n", a.hp);
    printf("%d\n", a.speed);
    printf("%d\n", a.tier);
    printf("%s\n", a.name);

    return 0;
}