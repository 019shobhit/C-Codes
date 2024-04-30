// Find the minimum value out of all the elements in the array

#include<stdio.h> 
#include<limits.h> 

int main()
{
    int arr[]={2,4,-233,-234,62,6,2,672,747,7,45};
    int x=arr[0];
    for(int i=1;i<11;i++){
        if(arr[i]<x){
            x=arr[i];
        }
    }
    printf("The smallest element is %d",x);
    return 0;
}	