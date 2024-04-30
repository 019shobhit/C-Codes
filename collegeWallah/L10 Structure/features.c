#include<stdio.h> 
#include<string.h> 

int main()
{
     typedef struct pokemon
    {
        int speed;
        int hp;
        int attack;
        char tier;
        char name[20];
    }pokemon;

    pokemon a,b,c;

    a.speed = 80;
    a.hp = 100;
    a.attack = 50;
    a.tier = 'X';
    strcpy(a.name,"charizard");

    b = a;

    printf("%d",b.attack);


    return 0;
}	