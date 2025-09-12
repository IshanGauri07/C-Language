//4. Write a Program in C to Swap the values of two variables without using any extra variable.


#include <stdio.h>

int main() {
    int X, Y;

    printf("Enter the numbers X and Y: ");
    scanf("%d %d", &X, &Y);   // user types: 5 10

    // swap without extra variable
    X = X + Y;
    Y = X - Y;
    X = X - Y;

    printf("After swapping: X = %d, Y = %d\n", X, Y);

    return 0;
}
