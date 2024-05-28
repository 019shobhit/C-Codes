#include <stdio.h>
#include <stdbool.h>

int main()
{
    char ch[] = "abcdcba";
    int l=0;
    bool flag = true;
    while(ch[l]!='\0'){
        l++;
    }
    for(int i=0,j=l-1;i<l;i++,j--){
        if(ch[i]!=ch[j]){
            flag =false;
            break;
        }
    }
    if(flag == true){
        printf("sring is palindrome");
    }
    else{
        printf("not a plindrome");
    }
    return 0;
}