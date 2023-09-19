#include<stdio.h>
unsigned int factorial(int a){
    int fact=1;
    for(int i=2; i<=a; i++){
        fact*=i;
    } 
    return fact;
}

int main(){
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    printf("Factorial of %d is %u", a, factorial(a));
}