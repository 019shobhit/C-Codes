//  Calculate the sum of all elements in the given array.

#include<stdio.h> 

int main()
{
    int n;
    printf("Enter how much elements you wnats to add");
    scanf("%d",&n);
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        printf("enter %d element: ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("The sum of all the elements is: %d",sum);
    return 0;
}	