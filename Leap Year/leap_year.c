#include<stdio.h>

void leap_year(int year){
    if(year%100==0){
        if(year%400==0){
            printf("\nLeap Year");
        }else{
            printf("\nNot a Leap Year");
        }
    }else{
        if(year%4==0){
            printf("\nLeap Year");
        }else{
            printf("\nNot a Leap Year");
        }
    }
}

int main(){
    int year;
    printf("Enter a year to check if it is leap year or not: ");
    scanf("%d", &year);
    leap_year(year);
}