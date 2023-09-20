#include<stdio.h>
int perfect_Square(int a){
    for(int i=0; i<a/2; i++){
        if(i*i==a) return 1;
    } return 0;
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(perfect_Square(a)) printf("Number is a perfect square");
    else printf("Number is not a perfect square");
}