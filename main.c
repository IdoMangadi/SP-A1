#include <stdio.h>
#include "NumClass.h"

int main()
{
    printf("Enter the first number: ");
    int num1;
    scanf("%d", &num1);
    printf("Enter the second number: ");
    int num2;
    scanf("%d", &num2);
    
    if(num1 > num2)
    {
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    //Printing all the Armstrong numbers between:
    printf("The Armstrong numbers are: ");
    for(int i=num1; i<=num2; i++)
    {
        if(isArmstrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\nThe Palindromes are: ");
    for(int i=num1; i<=num2; i++)
    {
        if(isPalindrome(i))
        {
            printf("%d ", i);
        }
    }
    printf("\nThe Prime numbers are: ");
    for(int i=num1; i<=num2; i++)
    {
        if(isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\nThe Strong numbers are: ");
    for(int i=num1; i<=num2; i++)
    {
        if(isStrong(i))
        {
            printf("%d ", i);
        }
    }

    return  0;


}