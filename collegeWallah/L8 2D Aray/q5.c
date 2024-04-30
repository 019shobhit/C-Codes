// Given a matrix having 0-1 only, find the row with the maximum number of 1's.

#include <stdio.h>

int main()
{
    int arr[4][4] = {{1, 0, 1, 0}, {1, 1, 0, 0}, {1, 0, 1, 1}, {0, 0, 1, 0}};
    int count[4], ind;
    for (int i = 0; i < 4; i++)
    {
        count[i] = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
                count[i]++;
        }
    }
    int max = count[0];
    for (int i = 0; i < 4; i++)
    {
        if (max < count[i])
        {
            max = count[i];
            ind = i;
        }
    }
    printf("the maximum no. of 1 is %d in %d row", max,ind);
    // for(int i=0;i<4;i++){
    //     if(max==count[i]){
    //         printf("The maximum sum row is %d and the sum is %d",i,maxsum);
    //     }
    // }
    return 0;
}