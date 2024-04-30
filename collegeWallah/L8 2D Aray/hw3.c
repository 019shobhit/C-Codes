// Given a matrix 'a' of dimention n X m and two cordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2).
#include<stdio.h> 

int main()
{
    int arr[4][4] = {{1, 2, 3,4}, {3, 8, 5,4}, {5, 6, 22,4},{5,6,7,3}};
    int l1,r1,l2,r2,sum=0;
    printf("enter l1 and r1: ");
    scanf("%d%d",&l1,&r1);
    printf("\nenter l2 and r2: ");
    scanf("%d%d",&l2,&r2);
    for(int i=l1;i<l2;i++){
        for(int j=r1;j<r2;j++){
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}	