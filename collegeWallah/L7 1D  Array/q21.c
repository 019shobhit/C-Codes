// Write a program to reverse the array without using any extra array.

 #include<stdio.h> 
 
 int main()
 {
    int arr[11] = {1, 2, 3, 6, 7, 8, 9, 10, 10, 5, 6};
    int i=0,j=10;
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for (int i = 0; i < 11; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
 }	