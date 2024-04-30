// If ages of Ram, Shyam and Ajay are input through the keyboard, Write a program to determine the youngest of the three.
 #include<stdio.h> 
 
 int main()
 {
    int ram , shyam , ajay;
    printf("enter the ages of ram shyam and ajay ");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    if(ram<shyam){
        if(shyam<ajay){
            printf("Ajay is youngest");
        }
        else{
            printf("Shyam is youngest");
        }
    }
    else if(ram<ajay){
        printf("Ajay is youngest");
    }
    else{
        printf("Ram is youngest");
    }
    return 0;
    }