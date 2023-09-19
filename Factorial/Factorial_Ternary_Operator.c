#include<stdio.h>
int factorial(int a){
   return a==1 || a==0? 1: a*factorial(a-1);
}
int main(){
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    printf("The factorial of %d is %d",a, factorial(a));
}