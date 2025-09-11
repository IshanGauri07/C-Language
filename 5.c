// 2. Write a Program to check whether a number is prime or not.

#include <stdio.h>

int main(){

    int i, num, isprime=1;

    printf("enter the number = ");
    scanf("%d", &num);

    if (num < 2)
    {
        isprime = 0;
    }
    else
    {
        for ( i = 2; i * i <= num ; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
            
        }
        
    }
    
    if (isprime)
    {
        printf("The is a prime number %d \n", num );
    } 
    else
    {
        printf("The number is not a prime number %d", num);
    }
    
    return 0;
}