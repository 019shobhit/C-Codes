// A  five digit number is enteed through the keyboard. Write a program to obtain the reversed and to determine whether the original and reversed number are equal or not.
 #include<stdio.h> 
 
 int main()
 {
    int n,num , rev,n1,n2,n3,n4,n5;
    printf("enter five digit number : ");
    scanf("%d",&n);
    num =n;
    n1=n%10;
    n=n/10;
    n2=n%10;
    n=n/10;
    n3=n%10;
    n=n/10;
    n4=n%10;
    n=n/10;
    n5=n%10;
    rev = n1*10000 + n2*1000 + n3*100 + n4*10 + n5;
    printf("the reverse of the number is %d\n",rev);
    if(num == rev){
        printf("number and reverse number are same \n");
    }
    else{
        printf("number and reverse number are not same\n");
    }
    return 0;
    }