#include<stdio.h>
int GCD(int a, int b){
    if(a==0) return b;
    return GCD(b%a, a);
}

int LCM(int a, int b){
    return (a*b)/GCD(a, b);
}

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("LCM of these two numbers are : %d", LCM(a,b));
}