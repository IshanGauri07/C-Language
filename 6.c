// 3. Write a C program to calculate Compound Interest.

#include <stdio.h>

#include <math.h>

int main(){

    double principal, rate, time;

    printf("Enter the principal = \n");
    scanf("%lf", &principal);

    printf("Enter the rate = \n");
    scanf("%lf", &rate);

    printf("Enter the time = ");
    scanf("%lf", &time);

    double amount = 
    principal * ((pow(( 1 + rate / 100 ), time)));
    double CI =  amount - principal;

    printf("Calculate compound intrest is : %lf", CI);

    return 0;
}