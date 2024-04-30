// Rotate the given aray 'a' by k steps, where k is non-negative.
// NOTE: k can be grater then n as well where n is the size of array 'a'.

 #include<stdio.h> 

 void rev(int arr[],int a, int b){
    int i,j;
    for(i=a,j=b;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
 }
 
 int main()
 {
    int n=10;
    int arr1[10] = {1, 2, 3,4,5, 6, 7, 8, 9, 10};
    int k=4;
    k=k%n;
    rev(arr1,0,n-1);
    rev(arr1,0,k-1);
    rev(arr1,k,n-1);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr1[i]);
    }
    return 0;
 }	