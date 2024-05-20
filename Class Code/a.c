#include<stdio.h> 

int main()
{
    int arr[]={10,31,61,19,22,4,6,111,12,40};
    int len = sizeof(arr)/sizeof(arr[0]);
    // printf("%d",len);

    for(int i=0;i<len;i++){
        for(int j=1+i;j<len;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}	