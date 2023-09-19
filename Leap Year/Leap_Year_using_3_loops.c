#include<stdio.h>

int leap_year(int year){
    if(year%400==0) return 1; //Century leap year
    if(year%100==0) return 0; //Century Non-Leap Year
    if(year%4==0) return 1; //Leap Year
    return 0; //Non-Leap Year
}

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    leap_year(year)? printf("Leap Year") : printf("Not a Leap Year"); //true if return value is 1, false if return value is 0
}