// Write a program to encrypt a string by adding 1 to the ascii value to the its cahracter
 #include<stdio.h> 
 
 int main()
 {
    char ch[50];
    printf("Enter string : ");
    gets(ch);
    int i=0;
    while (ch[i] != '\0')
    {
        ch[i]+=1;
        i++;
    }
    puts(ch);
    return 0;
 }	