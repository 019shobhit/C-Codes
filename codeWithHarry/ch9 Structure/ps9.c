// Write a structure capable of storing data. Write a function to compare those dates.
 #include<stdio.h> 
 struct dates
 {
    int day;
    int month;
    int year;
 };
 void display(struct dates d){
    printf("%d/%d/%d\n",d.day,d.month,d.year);
 }
 int dcmp(struct dates a, struct dates b){
    int re=0;
    if(a.day == b.day && a.month == b.month && a.year== b.year){
        re = 1;
    }
    return re;
 }
 int main()
 {
    struct dates d1={28,1,2024};
    display(d1);
    struct dates d2 ={28,1,2024};
    display(d2);
    int comp= dcmp(d1,d2);
    if(comp ==1){
        printf("Dates are same \n");
    }
    else{
        printf("Dates are different\n");
    }
    return 0;
 }	