// Find out the maximum and minimum element of 2d array and also find index of the elements

#include <stdio.h>

int main()
{
   int arr[3][3] = {{1, 2, 3}, {3, 8, 5}, {5, 6, 22}};
   int max = arr[0][0];
   int min = arr[0][0];
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (max < arr[i][j])
            max = arr[i][j];
         if (min > arr[i][j])
            min = arr[i][j];
      }
   }

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (max == arr[i][j])
         {
            printf("The maximum element of 2d array is %d and present at %d row and %d column\n", max, i, j);
            break;
         }
         if (min == arr[i][j])
         {
            printf("The minumum element of 2d array is %d and present at %d row and %d column\n", min, i, j);
         }
      }
   }
   return 0;
}