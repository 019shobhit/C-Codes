#include<stdio.h> 
void sumandavg(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=(float)(*sum)/2;
}

int main(){
    int x,y,sum;
    float avg;
    x=2;
    y=5;
    sumandavg(x,y,&sum,&avg);
    printf("the sum is %d \n",sum);
    printf("the avg is %f",avg);
    return 0;
}