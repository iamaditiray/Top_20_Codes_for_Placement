#include<stdio.h>

int GCD(int a, int b){
    if(a==0) return b;
    return GCD(b%a, a);
}

int main(){
    int a;
    int b;
    printf("Enter the Numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD: %d", GCD(a,b));
}

/* 
(20, 28)
28%20=8
(8, 20)
20%8=4
(4, 8)
8%4=0
returns 4
*/