// Given an array of marks of student, if the marks of any student is less than 35 points print its roll number.[roll number here refers to the index of array.]
 #include<stdio.h> 
 
 int main()
 {
    int marks[]={56,57,89,23,4,13,66,89,3,4};
    for(int i=0;i<10;i++){
        if(marks[i]<30){
            printf("%d \n",i+1);
        }
    }
    return 0;
 }	