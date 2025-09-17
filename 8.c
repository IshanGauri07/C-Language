// 5. WAP to print the maximum out of four numbers.

#include <stdio.h>

int main() {
    
    int a, b, c, d;
    printf("Enter four number =  \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("Maximum Number is %d\n ", a);
    }

    if (b > a && b > c && b > d )
    {
        printf("Maximum Number is %d\n ", b);
    }

    if (c > a && c > b && c > d)
    {
        printf("Maximum Number is %d\n ",c);
    }
    
    if (d > a && d > b && d > c)
    {
        printf("Maximum Number is %d\n",d);
    }
    
    
    return 0;
}
