// wap to print the maximum out of two number

#include<stdio.h>

int main() {
    int a, b;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter another number: ");
    scanf("%d", &b);

    if ( a > b )
    {
        printf("Greatest number %d\n ",a);
    } else {
        printf("Greatest number %d\n ",b);
    }
    return 0;
}