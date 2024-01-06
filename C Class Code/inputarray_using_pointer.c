// 20-12-2023

#include<stdio.h> 
void input_array(int x[5]){
    for(int i=0;i<5;i++){
        scanf("%d",x[i]);
    }
}
int main()
{
    int a[5];
    input_array(a);
    for(int i=0;i<5;i++){
        printf("%d \t",a[i]);
    }
    return 0;
    }