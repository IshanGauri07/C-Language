// 6. WAP to print the second maximum out of three numbers. 

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b)) {
        printf("The second maximum number is: %d\n", a);
    } 
    else if ((b > a && b < c) || (b > c && b < a)) {
        printf("The second maximum number is: %d\n", b);
    } 
    else {
        printf("The second maximum number is: %d\n", c);
    }

    return 0;
}
