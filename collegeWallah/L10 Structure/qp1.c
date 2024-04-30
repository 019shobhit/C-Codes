#include<stdio.h> 
#include<string.h>

int main()
{
    struct book{
        char name[50];
        float price;
        int pages;
    }dm,psuc,coa,fcet;

    dm.pages = 100;
    dm.price = 299.5;
    strcpy(dm.name,"Discrete Mathematics");

    psuc.pages = 800;
    psuc.price = 105.23;
    strcpy(psuc.name,"Problem Solving Using C");

    coa.pages = 150;
    coa.price = 313.56;
    strcpy(coa.name,"Computer Orgination and Architecture");

    printf(" name : %s \n",dm.name);
    printf(" pages : %d \n",dm.pages);
    printf(" price : %f \n",dm.price);
    
    printf("\n name : %s \n",psuc.name);
    printf(" pages : %d \n",psuc.pages);
    printf(" price : %f \n",psuc.price);
    
    printf("\n name : %s \n",coa.name);
    printf(" pages : %d \n",coa.pages);
    printf(" price : %f \n",coa.price);
    
    return 0;
}	