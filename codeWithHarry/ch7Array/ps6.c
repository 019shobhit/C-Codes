#include<stdio.h> 
void inputarray(int ,int[]);
int checkpositive(int ,int[]);

int main(){
    int x;
    printf("enter element to get of that number array \n");
    scanf("%d",&x);
    int array[x];
    inputarray(x,array);
    printf("the no. of +ve element in the array is %d \n",checkpositive(x,array));
    return 0;
}

void inputarray(int n,int a[n]){
    for(int i=0;i<n;i++){
        printf("enter %d element of array \n",i+1);
        scanf("%d",&a[i]);
    }
}

int checkpositive(int n,int a[n]){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            count++;
        }
    }
    return count;
}