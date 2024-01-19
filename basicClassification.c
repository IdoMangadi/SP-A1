#include <stdio.h> 

#define TRUE 1
#define FALSE 0

int isStrong (int x)
{
    if (x <= 0)
    {
        return 0;
    }

    double y = (double)x;
    int j = 1;
    int digitsCounter = 0;
    while(TRUE)
    {    
        if((y/j) >= 1)
        {
            digitsCounter++;
            j = j * 10;
        }
        else
        {
            break;
        }
    }

    int num = x;
    int sum = 0;
    int factorialSum = 1;
    int digit;
    j = 10;
    for(int k=0; k<digitsCounter; k++)
    {
        digit = (num % j) / (j / 10);

        for(int i=0; i<=digit-1; i++)
        {
            factorialSum = factorialSum * (i+1);
        }
        sum += factorialSum;
        factorialSum = 1;
        j = j * 10;

    }

    if((sum -x) == 0)
    {
        return 1;
    }
    return 0;
}