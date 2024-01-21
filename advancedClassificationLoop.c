#include <stdio.h>
#include "NumClass.h"


/**
 * A function that calculating 'x' in the power of 'p'.
*/
int power(int x, int p)
{
    if(p == 0)
    {
        return 1;
    }
    int mul = x;
    for(int i=0; i<p-1; i++){
        x = x * mul;
    }
    return x;
}
int number_of_digits(int x)
{
    int digits_counter = 0;
    while(x > 0)
    {
        digits_counter++;
        x = x / 10;
    }
    return digits_counter;
}

int isArmstrong(int x)
{
    int num = x; //a number to work on
    int sum = 0;
    int digits_counter = number_of_digits(x);

    for(int i=0; i<digits_counter; i++) //Calculating the Armstrong sum:
    {   
        sum = sum + power((num%10),digits_counter);
        num = num / 10;
    }
    return (sum == x);
}

int isPalindrome(int x)
{
    int num = x;
    int digits_counter = number_of_digits(x);
    
    for(int i=1; i<=(digits_counter/2); i++) //Comparing digits from the lower part of the number and the upper part of it.
    {
        int lower_digit = (num % (power(10, i))) / (power(10, i-1)); //Extracting the lower digit to compare.
        int upper_digit = (num / (power(10, digits_counter-i))) % 10; //Extracting the upper digit to compare.
        if(lower_digit != upper_digit)
        {
            return 0;
        }
    }

    return 1;

}

















