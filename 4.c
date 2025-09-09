// 1. Find the largest number among the three numbers

#include <stdio.h>

int main() {
    int a, b, c;

    printf("enter the number = ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && b >= c)
    {
        printf("%d", a);
    }
    else if (b >= c && b >= c )
    {
        printf("%d", b);
    }
    else{
         printf("%d", c);
    }
   

    return 0;
    
    
}