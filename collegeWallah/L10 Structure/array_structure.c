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

    pokemon arr[3];

    arr[0].speed=100;
    arr[0].hp=80;
    arr[0].attack=90;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"Charizard");

    arr[1].speed=100;
    arr[1].hp=120;
    arr[1].attack=50;
    arr[1].tier = 'S';
    strcpy(arr[1].name,"pikachu");

    
    arr[2].speed=60;
    arr[2].hp=50;
    arr[2].attack=120;
    arr[2].tier = 'B';
    strcpy(arr[2].name,"king");

    for(int i=0;i<3;i++){
        printf("Name : %s \n",arr[i].name);
        printf("Speed : %d \n",arr[i].speed);
        printf("HP : %d \n",arr[i].hp);
        printf("Attack : %d \n",arr[i].attack);
        printf("Tier : %c \n",arr[i].tier);
    }


    return 0;
}	