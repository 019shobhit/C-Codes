// Create a structure 'date' that contains three members namely date,month and year. Create 2 structure variables with different dates and now compare the two. if the dates are equal than display message as "Equal" othervise "Unequal".
 #include<stdio.h> 
 
 int main()
 {
    typedef struct date{
        int date;
        int month;
        int year;
    }x;
    x a,b;

    a.date = 15;
    a.month = 12;
    a.year = 1999;

    b.date = 15;
    b.month = 12;
    b.year = 1999;

    if(a.date==b.date  && a.month==b.month && a.year== b.year){
        printf("Equal");
    }
    else{
        printf("Unequal");
    }

    return 0;

 }	