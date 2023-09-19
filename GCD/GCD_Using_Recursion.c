#include<stdio.h>

int GCD(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a==b) return a;
    if(a>b) return GCD(a-b, b);
    return GCD(a, b-a);
}

int main(){
    int a;
    int b;
    printf("Enter the Numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD : %d", GCD(a,b));
}