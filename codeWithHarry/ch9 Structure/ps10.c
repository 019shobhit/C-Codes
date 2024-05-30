
// Solve the problem 9 using typedef keyword
 #include<stdio.h> 
 typedef struct dates
 {
    int day;
    int month;
    int year;
 }x;
 void display(x d){
    printf("%d/%d/%d\n",d.day,d.month,d.year);
 }
 int dcmp(x a,x b){
    int re=0;
    if(a.day == b.day && a.month == b.month && a.year== b.year){
        re = 1;
    }
    return re;
 }
 int main()
 {
    x d1={28,1,2024};
    display(d1);
    x d2 ={28,1,2024};
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