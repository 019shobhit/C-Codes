#include<stdio.h> 

int main()
{
    struct pokimon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokimon pikachu;
    pikachu.hp=100;
    pikachu.speed=80;
    // pikachu.attack=50;
    printf("Enter pikachu attack : ");
    scanf("%d",&pikachu.attack);
    pikachu.tier='A';

    struct pokimon king;
    king.hp=120;
    king.speed=60;
    king.attack=70;
    king.tier='B';

    printf("%d \n",pikachu.hp);
    printf("%d \n",pikachu.speed);
    printf("%d \n",pikachu.attack);
    
    
    return 0;
}	