// Calculate the product of all the elements in the given array

 #include<stdio.h> 
 
 int main()
 {
    int n;
    printf("Enter how much elements you wnats to multiply");
    scanf("%d",&n);
    int arr[n],sum=1;
    for(int i=0;i<n;i++){
        printf("enter %d element: ",i+1);
        scanf("%d",&arr[i]);
        sum*=arr[i];
    }
    printf("The product of all the elements is: %d",sum);
    return 0;
 }	