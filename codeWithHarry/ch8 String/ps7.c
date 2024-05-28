// Write a program to decrypt the string encrypt using encrypt function in program 6.
 #include<stdio.h> 
 
 int main()
 {
    char ch[50];
    printf("Enter string : ");
    gets(ch);
    int i=0;
    while (ch[i] != '\0')
    {
        ch[i]-=1;
        i++;
    }
    printf("Decrypted string is : \n");
    puts(ch);
    return 0;
 }	