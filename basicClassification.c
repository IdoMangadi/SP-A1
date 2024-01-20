#include <stdio.h> 

#define TRUE 1
#define FALSE 0

int isStrong (int x)
{
    if (x <= 0)
    {
        return 0;
    }

    int num = x; //a number to work on
    int sum = 0;
    while(num > 0)
    {    
        int digit = num % 10;
        int factorialSum = 1;
        for(int i=1; i<=digit; i++)
        {
            factorialSum = factorialSum * i;
        }
        sum += factorialSum;
        num = num / 10;
    }

    return (sum == x);
}