#include <stdio.h>

int main(){

    int a, b, c, second;

    printf("Enter the three number : ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b))
        second = a;
    else if ((b > a && b < c) || (b > c && b < a))
        second = b;
    else
        second = c;
        
    printf("The second maximum number : %d \n", second);

    return 0;
    
}