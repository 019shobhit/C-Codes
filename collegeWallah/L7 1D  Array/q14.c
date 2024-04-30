// Given an array of integers, change the value of all odd inxexed element to its double  and increment all even idnexed value by 10.
 
 #include<stdio.h> 
 
 int main()
 {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
    }
    for(int i=0;i<10;i++)
    printf("%d \t",arr[i]);
    return 0;
 }	