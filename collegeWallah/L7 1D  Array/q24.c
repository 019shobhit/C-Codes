// WAP to find a duplicate element from a given array of integers.

 #include<stdio.h> 
 
 int main()
 {
    int arr[]={6,2,1,4,5,6,7};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicte number\n",arr[i]);
            }
        }
    }
    return 0;
 }	