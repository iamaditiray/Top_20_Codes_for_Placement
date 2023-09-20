#include<stdio.h>
#include<math.h>

int no_of_digits(int a){
    int n=0;
    while(a){
        n++;
        a/=10;
    }
    return n;
}

int Armstrong(int a){
    int order=no_of_digits(a);
    int sum=0, temp=a;
    while(temp){
        int r=temp%10; //Picking the last digit
        sum+=pow(r,order); 
        temp/=10;
    }
    if(sum==a) return 1;
    else return 0;
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(Armstrong(a)) printf("It is an armstrong number");
    else printf("It is not an armstrong number.");
}

/*
Armstrong Number

-> Count the digits
-> Power the digits with order of the digit
-> Sum them
-> If sum equals the original number it is an Armstrong Number.

*/