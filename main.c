#include <stdio.h>
#include "NumClass.h"

int main()
{
    printf("Enter the first number: ");
    int num1;
    scanf("%d", &num1);
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
            print(i);
        }
    }
    printf("\nThe Palindromes are: ");
    for(int i=num1; i<=num2; i++)
    {
        if(isPalindrome(i))
        {
            print(i);
        }
    }
    printf("\nThe Prime numbers are: ");
    for(int i=num1; i<=num2; i++)
    {
        if(isPrime(i))
        {
            print(i);
        }
    }
    printf("\nThe Strong numbers are: ");
    for(int i=num1; i<=num2; i++)
    {
        if(isStrong(i))
        {
            print(i);
        }
    }


}