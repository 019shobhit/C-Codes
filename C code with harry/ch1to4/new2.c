#include<stdio.h> 

int main(){
    int s1,s2,s3,total;
    printf("enter Subject marks(phy, maths , coa) \n");
    scanf("%d %d %d",&s1,&s2,&s3);
    total = (s1+s2+s3)/3;
    if(s1>33 && s2>33 && s3>33 && total>40)
    {
        printf("student pass with %d % marks",total);
    }
    else
    printf("Sudent fails");
    return 0;
}