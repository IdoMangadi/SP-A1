#include <stdio.h> 
#include "NumClass.h"


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

int isPrime (int x)
{ 
    if (x <= 3)
    {
        return 1;
    }
    if((x%10)%2 == 0) //Checking if x is even
    {
        return 0;
    }
    for(int i=3; i*i <=x; i=i+2)
    {
        if(x%i == 0)
        {
            return 0;
        }
    }
    return 1;
}