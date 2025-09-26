#include <stdio.h>

int main(){

    int call;
    float bill;

    printf("enter the number of calls : ");
    scanf("%d", &call);

    bill = 100.0;

    if (call<=100)
    {
        bill = 100.0;
    }
    else if (call<=200)
    {
        bill = 100.0 + (call - 100) * 0.80;
    }
    else
    {
        bill = 100.0 +(100 * 0.80);
    }
    
    printf("Total telephone bill is %.2f\n", bill);

    return 0;

}