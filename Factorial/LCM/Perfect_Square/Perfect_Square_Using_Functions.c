#include<stdio.h>
#include<math.h>

int perfect_square(int a){
    int n, intvariable;
    int floatvariable=sqrt((double)a); // sqrt function only inputs and outputs double variables
    intvariable=(int)floatvariable;
    n=intvariable*intvariable;
    if(n==a) printf("Success");
    else printf("Faliure");
}

int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);
    perfect_square(a);
}

/*
root(625)=25.000
int(25.000)=25
25^2=625 
625==625
Success

root(626)=25.0199...
int(25.019)=25
25^2=625
625!=626
Failure
*/
