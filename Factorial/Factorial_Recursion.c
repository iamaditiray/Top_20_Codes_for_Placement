#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}

int main(){
    int a;
    printf("Enter a Number ");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
}