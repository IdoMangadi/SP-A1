#include <stdio.h>
#include "NumClass.h"

int main()
{
    //printf("Enter the first number: ");
    int num1;
    if(scanf("%d", &num1) == 1){
        //printf("Enter the second number: ");
        int num2;
        if(scanf("%d", &num2) == 1){
        
            if(num1 > num2)
            {
                int tmp = num1;
                num1 = num2;
                num2 = tmp;
            }

            //Printing:
            printf("The Armstrong numbers are:");
            for(int i=num1; i<=num2; i++)
            {
                if(isArmstrong(i))
                {
                    printf(" %d", i);
                }
            }
            printf("\nThe Palindromes are:");
            for(int i=num1; i<=num2; i++)
            {
                if(isPalindrome(i))
                {
                    printf(" %d", i);
                }
            }
            printf("\nThe Prime numbers are:");
            for(int i=num1; i<=num2; i++)
            {
                if(isPrime(i))
                {
                    printf(" %d", i);
                }
            }
            printf("\nThe Strong numbers are:");
            for(int i=num1; i<=num2; i++)
            {
                if(isStrong(i))
                {
                    printf(" %d", i);
                }
            }
            printf("\n");

            return  0;
        }
    }
}