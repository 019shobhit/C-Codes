// Write a program to check weather a given character is present in string or not.
 #include<stdio.h> 
 int check(char *ptr,char x){
    int flag =0;
    while(*ptr != '\0'){
        if(*ptr==x){
            flag =1;
            break;
        }
        ptr++;
    }
    return flag;
 }
 int main()
 {
    char ch[50];
    printf("enter string : ");
    gets(ch);
    printf("enter character count : ");
    char x;
    scanf("%c",&x);
    int a=check(ch,x);
    if(a==1){
        printf("Entered character is present in he string");
    }
    else{
        printf("not present");
    }
    return 0;
 }	